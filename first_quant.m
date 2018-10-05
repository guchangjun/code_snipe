function [  ] = TestMDLive(  )

%����ʵʱ����
ret = gm.InitMD('283136745@qq.com', '009296', MDMode.MD_MODE_LIVE, 'CFFEX.IF*.tick');

if ret ~= 0
    disp('��ʼ��ʧ��!');
    disp(ret);
    return;
end

gm.SetTickHandle(@OnTick);
gm.SetBarHandle(@OnBar);
gm.SetLoginHandle(@OnLogin);
gm.SetErrorHandle(@OnError);

gm.Run();

end

function [  ] = OnLogin( mask )

if mask == 1
    disp('md login');
end

end

function [  ] = OnTick( tick )

x = sprintf('�������: %s %s.%s %d', char(tick{1,'strtime'}), char(tick{1,'exchange'}), char(tick{1,'sec_id'}), tick{1,'last_price'});
disp(x);

end

function [  ] = OnBar( bar )

x = sprintf('��ʱ����: %s %s.%s %d %d', char(bar{1,'strtime'}), char(bar{1,'exchange'}), char(bar{1,'sec_id'}), bar{1, 'bar_type'}, bar{1,'close'});
disp(x);

end

function [  ] = OnError( code, msg )

disp(msg);

end


