#include "ros/ros.h"
#include "std_msgs/String.h"
#include "wheels/wheels_status.h"
#include "wheels/cmd_get_one_wheel_status.h"
#include "wheels/cmd_set_car_direction_speed.h"
#include <sstream>

bool fnSetDirectionAndSpeed(wheels::cmd_set_car_direction_speedRequest  &req,
							wheels::cmd_set_car_direction_speedResponse &res)
{
	res.nRetCode = 1;
	res.nLastDirection = 2;
	res.nLastSpeed = 50;
	ROS_INFO("new request: direction=%d, speed=%d", req.nNewDirection, req.nNewSpeed);
	ROS_INFO("sending back response: Code[%d], lastdirection=%d, lastspeed=%d", res.nRetCode, res.nLastDirection, res.nLastSpeed);
	return true;
}

bool fnGetOneWheelStatus(wheels::cmd_get_one_wheel_statusRequest  &req,
							wheels::cmd_get_one_wheel_statusResponse &res)
{
	res.nRetCode = 2;
	res.nWheelDirection = 1;
	res.nWheelSpeed = 34;
	ROS_INFO("request: wheelID=%d", req.nWheelID);
	ROS_INFO("sending back response: RetCode=%d, WheelDirection=%d, wheel Speed=%d", res.nRetCode, res.nWheelDirection, res.nWheelSpeed);
	return true;
}
/**
 * This tutorial demonstrates simple sending of messages over the ROS system.
 */
int main(int argc, char **argv)
{
  /**
   * The ros::init() function needs to see argc and argv so that it can perform
   * any ROS arguments and name remapping that were provided at the command line.
   * For programmatic remappings you can use a different version of init() which takes
   * remappings directly, but for most command-line programs, passing argc and argv is
   * the easiest way to do it.  The third argument to init() is the name of the node.
   *
   * You must call one of the versions of ros::init() before using any other
   * part of the ROS system.
   */
  ros::init(argc, argv, "wheels_status");

  /**
   * NodeHandle is the main access point to communications with the ROS system.
   * The first NodeHandle constructed will fully initialize this node, and the last
   * NodeHandle destructed will close down the node.
   */
  ros::NodeHandle n;

  /**
   * The advertise() function is how you tell ROS that you want to
   * publish on a given topic name. This invokes a call to the ROS
   * master node, which keeps a registry of who is publishing and who
   * is subscribing. After this advertise() call is made, the master
   * node will notify anyone who is trying to subscribe to this topic name,
   * and they will in turn negotiate a peer-to-peer connection with this
   * node.  advertise() returns a Publisher object which allows you to
   * publish messages on that topic through a call to publish().  Once
   * all copies of the returned Publisher object are destroyed, the topic
   * will be automatically unadvertised.
   *
   * The second parameter to advertise() is the size of the message queue
   * used for publishing messages.  If messages are published more quickly
   * than we can send them, the number here specifies how many messages to
   * buffer up before throwing some away.
   */
   
	// implement a topic "Wheels_status" and message "wheels_status"
	ros::Publisher wheelsstatus_publisher = n.advertise<wheels::wheels_status>("wheels_status", 1000);

	ros::ServiceServer service1 = n.advertiseService("set_direction_speed", fnSetDirectionAndSpeed);
	
	ros::ServiceServer service2 = n.advertiseService("get_one_wheel_status", fnGetOneWheelStatus);
  
	ros::Rate loop_rate(10);

  /**
   * A count of how many messages we have sent. This is used to create
   * a unique string for each message.
   */
  int count = 0;
  while (ros::ok())
  {
    /**
     * This is a message object. You stuff it with data, and then publish it.
     */
	wheels::wheels_status status;
	status.nRightWheelHealthyStatus = 1;
	
    ROS_INFO("%s", "wheel_statusvalue");

    /**
     * The publish() function is how you send messages. The parameter
     * is the message object. The type of this object must agree with the type
     * given as a template parameter to the advertise<>() call, as was done
     * in the constructor above.
     */
    wheelsstatus_publisher.publish(status);

    ros::spinOnce();

    loop_rate.sleep();
    ++count;
  }


  return 0;
}
