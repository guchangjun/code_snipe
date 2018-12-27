#include <ros/ros.h>
#include <rosbag/bag.h>
#include <rosbag/view.h>
#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <map>
#include <opencv2/opencv.hpp>
#include <memory>
#include <sensor_msgs/Image.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <sys/stat.h>
#include <sys/types.h> 


int main(int argc, char **argv){

    std::string bag_addr=argv[1];
    std::string bag_name=argv[2];
    rosbag::Bag bag;
    bag.open(bag_addr+"/"+bag_name,rosbag::bagmode::Read);

    int camera_count = 1;
    
    while (argc - camera_count - 2 != 0)
    {
        std::string camera_topic = argv[camera_count+2];        
        std::vector<std::string> topics;
        topics.push_back(camera_topic);
        rosbag::View view(bag, rosbag::TopicQuery(topics));
        int img_count=0;
        rosbag::View::iterator it= view.begin();
        std::ofstream outfile;
        
        outfile.open (bag_addr+"/camera_"+std::to_string(camera_count)+"_image_time.txt");
        if (!outfile.is_open())
        {
            std::cout<<"file not open"<<std::endl;
        }
        std::string dir_name = bag_addr+"/camera_"+std::to_string(camera_count)+"_img";
        //_mkdir(dir_name.c_str(), NULL);
        int isCreate = mkdir(dir_name.c_str(),S_IRUSR | S_IWUSR | S_IXUSR | S_IRWXG | S_IRWXO);
        
        for(;it!=view.end();it++){
            
            rosbag::MessageInstance m =*it;

            sensor_msgs::ImagePtr simg = m.instantiate<sensor_msgs::Image>();
            if(simg!=NULL){
                cv_bridge::CvImagePtr cv_ptr;
                
                try
                {
                    cv_ptr = cv_bridge::toCvCopy(simg, "bgr8");
                    
                    std::stringstream ss;
                    std::stringstream ss_time;
                    ss<<bag_addr+"/camera_"+std::to_string(camera_count)+"_img/img_"<<img_count<<".jpg";

                    cv::imwrite(ss.str(), cv_ptr->image);
                    ss_time<<img_count<<","<<m.getTime()<<","<<simg->header.stamp<<std::endl;
                    outfile<<ss_time.str();
            
                }
                catch (cv_bridge::Exception& e)
                {
                    ROS_ERROR("cv_bridge exception: %s", e.what());
                    return 0;
                }
                img_count++;
            }
        }
        outfile.close();
        
        ++camera_count;
    }
    

    
    return 0;
};
