#include "ros/ros.h"
#include "ros_tutorial_msg/srvTest.h"
#include <cstdlib>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "client");
    if (argc != 3)
    {
        ROS_INFO("usage: add_two_ints_client X Y");
        return 1;
    }

    ros::NodeHandle nh;
    ros::ServiceClient client = nh.serviceClient<ros_tutorial_msg::srvTest>("add_two_ints");
    ros_tutorial_msg::srvTest srv;
    srv.request.a = atoll(argv[1]);
    srv.request.b = atoll(argv[2]);
    if (client.call(srv))
    {
        ROS_INFO("Sum: %ld", (long int)srv.response.result);
    }
    else
    {
        ROS_ERROR("Failed to call service add_two_ints");
        return 1;
    }

    return 0;
}
