#include "ros/ros.h"
#include "std_msgs/String.h"
#include "ros_tutorial_msg/msgData.h"

void tutorialCallback(const ros_tutorial_msg::msgData::ConstPtr& msg){

    ROS_INFO("I heard2: [%d]", msg->data);

}

void chatterCallback(const std_msgs::String::ConstPtr& msg)
{
    ROS_INFO("I heard: [%s]", msg->data.c_str());
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "subscriber");
    ros::NodeHandle nh;

    ros::Subscriber sub = nh.subscribe("chatter", 1000, chatterCallback);
    ros::Subscriber sub2 = nh.subscribe("tutorial_msg", 1000, tutorialCallback);

    ros::spin();

    return 0;
}
