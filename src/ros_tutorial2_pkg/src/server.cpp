#include "ros/ros.h"
#include "ros_tutorial_msg/srvTest.h"

bool add(ros_tutorial_msg::srvTest::Request  &req,
         ros_tutorial_msg::srvTest::Response &res)
{
    res.result = req.a + req.b;
    ROS_INFO("request: x=%ld, y=%ld", (long int)req.a, (long int)req.b);
    ROS_INFO("sending back response: [%ld]", (long int)res.result);
    return true;
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "server");
    ros::NodeHandle nh;

    ros::ServiceServer service = nh.advertiseService("add_two_ints", add);
    ROS_INFO("Ready to add two ints.");
    ros::spin();

    return 0;
}
