#include <iostream>
#include <string>
#include <ctime>

#include <ros/ros.h>
#include <rosbag/bag.h>
#include <rosbag/view.h>
#include <tf/transform_broadcaster.h>
#include <sensor_msgs/PointCloud2.h>
#include <sensor_msgs/Imu.h>
#include <sensor_msgs/Image.h>
#include <sensor_msgs/CompressedImage.h>
#include <tf/tfMessage.h>
#include <rosgraph_msgs/Log.h>
#include <cv_bridge/cv_bridge.h>
#include <image_transport/image_transport.h>
#include <opencv2/opencv.hpp>

#include <pcl_conversions/pcl_conversions.h>
#include <pcl/point_types.h>
#include <pcl/PCLPointCloud2.h>
#include <pcl/conversions.h>
#include <pcl_ros/transforms.h>
#include <pcl/filters/filter.h>
#include <pcl/filters/voxel_grid.h>

int main(int argc, char **argv)
{
    std::string in_bag_name {argv[1]};
    std::cout << "Input bag:  " << in_bag_name << std::endl;
    std::vector<geometry_msgs::TransformStamped> poses;
    rosbag::Bag in_bag {in_bag_name, rosbag::bagmode::Read};

    for (rosbag::MessageInstance m : rosbag::View{in_bag}) {
        if (m.getTopic() == "/tf") {
            tf::tfMessagePtr pose_msg = m.instantiate<tf::tfMessage>();
            poses.push_back(pose_msg->transforms[0]);
            //std::cout<<std::setprecision(20)<<"tf: "<<pose_msg->transforms[0].header.stamp.toSec()<<std::endl;
            continue;
        }
    }
    pcl::PointCloud<pcl::PointXYZ>::Ptr new_pt_cloud(new pcl::PointCloud<pcl::PointXYZ>);
    int lidar_count=0;
    for (rosbag::MessageInstance m : rosbag::View{in_bag}) {
        if (m.getTopic() == "velodyne_points") {
            lidar_count++;
            if(lidar_count<0){
                continue;
            }
            sensor_msgs::PointCloud2Ptr lidar_msg = m.instantiate<sensor_msgs::PointCloud2>();
            double lidar_time=lidar_msg->header.stamp.toSec();
            int ind=-1;
            for(int i=0; i<poses.size(); i++){
                double pose_time_after=poses[i].header.stamp.toSec();
                if(pose_time_after>lidar_time){
                    if(pose_time_after-lidar_time<0.5){
                        if(i>1){
                            double pose_time_before=poses[i-1].header.stamp.toSec();
                            if(lidar_time-pose_time_before<0.5){
                                if(lidar_time-pose_time_before>pose_time_after-lidar_time){
                                    ind=i-1;
                                }else{
                                    ind=i;
                                }
                                pcl::PointCloud<pcl::PointXYZ>::Ptr pt_cloud(new pcl::PointCloud<pcl::PointXYZ>);
                                pcl::fromROSMsg (*lidar_msg, *pt_cloud);       
                                
                                for (int j=0; j<pt_cloud->points.size(); j++){
                                    Eigen::Vector4f p(pt_cloud->points[j].x, pt_cloud->points[j].y, pt_cloud->points[j].z, 1);
                                    geometry_msgs::Transform tf=poses[ind].transform;
                                    Eigen::Vector3f trans(tf.translation.x, tf.translation.y, tf.translation.z);
                                    Eigen::Quaternionf qua(tf.rotation.w, tf.rotation.x, tf.rotation.y, tf.rotation.z);
                                    Eigen::Matrix3f R = qua.toRotationMatrix();
                                    Eigen::Matrix4f tran_mat= Eigen::Matrix4f::Identity();
                                    tran_mat.block<3,3>(0,0)=R;
                                    tran_mat.block<3,1>(0,3)=trans;
                                    Eigen::Vector4f p1=tran_mat*p;
                                    if(p1.z()>trans.z()-1.3){
                                        if((trans-p1.block<3,1>(0,0)).norm()>2){
                                            pcl::PointXYZ p_pcl(p1.x(), p1.y(), p1.z());
                                            new_pt_cloud->points.push_back(p_pcl);
                                        }
                                        
                                    }
                                }
                            }
                        }
                    }
                    break;
                }
            }
        }
    }
    in_bag.close();
    std::cout<<new_pt_cloud->size()<<std::endl;
    pcl::VoxelGrid<pcl::PointXYZ> downSizeFilter;
    downSizeFilter.setLeafSize(0.2, 0.2, 0.2);
    downSizeFilter.setInputCloud(new_pt_cloud);
    pcl::PointCloud<pcl::PointXYZ>::Ptr outputDS;
    outputDS.reset(new pcl::PointCloud<pcl::PointXYZ>());
    downSizeFilter.filter(*outputDS);
    pcl::io::savePCDFile("./point_cloud_segmap.pcd", *outputDS, true);
    
    

};
