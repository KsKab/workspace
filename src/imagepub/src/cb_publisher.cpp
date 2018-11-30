#include <ros/ros.h>
#include <sensor_msgs/Image.h>
#include <std_msgs/UInt8.h>
#include <image_transport/image_transport.h>
int main(int argc, char **argv)
{
	ros::init(argc, argv, "cb_publisher");
    ros::NodeHandle nh;
	image_transport::ImageTransport it(nh);
	image_transport::Publisher pub = it.advertise("cb_img", 1);
	sensor_msgs::Image imgar;
	imgar.width=80;
	imgar.height=80;
	imgar.step = imgar.width*3;
	imgar.encoding="rgb8";
	for (int j=0; j<40; j++)
	{
		for (int i=30*j; i<(30*j)+30; i++)
		{
			imgar.data.push_back(0);
		}
		for (int i=(30*j)+30; i<(30*j)+60; i++)
		{
			imgar.data.push_back(255);
		}
	}
	for (int j=40; j<80; j++)
	{
		for (int i=30*j; i<(30*j)+30; i++)
		{
			imgar.data.push_back(255);
		}
		for (int i=(30*j)+30; i<(30*j)+60; i++)
		{
			imgar.data.push_back(0);
		}
	}
	for (int j=0; j<40; j++)
	{
		for (int i=30*j; i<(30*j)+30; i++)
		{
			imgar.data.push_back(0);
		}
		for (int i=(30*j)+30; i<(30*j)+60; i++)
		{
			imgar.data.push_back(255);
		}
	}
	for (int j=40; j<80; j++)
	{
		for (int i=30*j; i<(30*j)+30; i++)
		{
			imgar.data.push_back(255);
		}
		for (int i=(30*j)+30; i<(30*j)+60; i++)
		{
			imgar.data.push_back(0);
		}
	}
	for (int j=0; j<40; j++)
	{
		for (int i=30*j; i<(30*j)+30; i++)
		{
			imgar.data.push_back(0);
		}
		for (int i=(30*j)+30; i<(30*j)+60; i++)
		{
			imgar.data.push_back(255);
		}
	}
	for (int j=40; j<80; j++)
	{
		for (int i=30*j; i<(30*j)+30; i++)
		{
			imgar.data.push_back(255);
		}
		for (int i=(30*j)+30; i<(30*j)+60; i++)
		{
			imgar.data.push_back(0);
		}
	}
	for (int j=0; j<40; j++)
	{
		for (int i=30*j; i<(30*j)+30; i++)
		{
			imgar.data.push_back(0);
		}
		for (int i=(30*j)+30; i<(30*j)+60; i++)
		{
			imgar.data.push_back(255);
		}
	}
	for (int j=40; j<80; j++)
	{
		for (int i=30*j; i<(30*j)+30; i++)
		{
			imgar.data.push_back(255);
		}
		for (int i=(30*j)+30; i<(30*j)+60; i++)
		{
			imgar.data.push_back(0);
		}
	}

	std::cout<<imgar.data.size()<<std::endl;
	ros::Rate loop_rate(5);
    while (nh.ok()) {
	
  	pub.publish(imgar);
    ros::spinOnce();
    loop_rate.sleep();}
    return 0;}

