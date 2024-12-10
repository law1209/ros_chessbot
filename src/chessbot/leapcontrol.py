#!/usr/bin/env python

# You need install the LeapSDK and its ROS interface to run this scripts

import sys, rospy, tf, moveit_commander, random
import numpy as np
import random
import datetime
import time

from geometry_msgs.msg import Pose, Point, Quaternion
from geometry_msgs.msg import Vector3
from leap_motion.msg import leapros


tf_h2d = np.eye(4)


tf_d2r = np.array([[-1,  0,  0,   0.4],
                                      [0,   0,  1, -0.5],
                                      [0,   1,  0,   0.7],
                                      [0,   0,  0,      1]])
tf_h2r  = np.eye(4)

tf_fix  = np.array([[0,-1,0,  0],
                                    [-1,0,0,  0],
                                    [0, 0,-1, 0],
                                    [0, 0, 0, 1]])

group  = moveit_commander.MoveGroupCommander("left_arm")
group.set_planning_time(1)
global pose
pose =Pose()


def callback(data):
        x = data.direction
        z = data.normal
        y = cross_product(z,x)
        palmpos = data.palmpos
	
        tf_h2d[0,0]= x.x
        tf_h2d[1,0]= x.y
        tf_h2d[2,0]= x.z
        tf_h2d[3,0]= 0

        tf_h2d[0,1]= y.x
        tf_h2d[1,1]= y.y
        tf_h2d[2,1]= y.z
        tf_h2d[3,1]= 0

        tf_h2d[0,2]= z.x
        tf_h2d[1,2]= z.y
        tf_h2d[2,2]= z.z
        tf_h2d[3,2]= 0

        tf_h2d[0,3]= palmpos.x*0.001
        tf_h2d[1,3]= palmpos.y*0.001
        tf_h2d[2,3]= palmpos.z*0.001
        tf_h2d[3,3]= 1

        tf_h2r = np.dot(tf_d2r,tf_h2d)
        #print(tf_h2r)
        point = Point(tf_h2r[0,3], tf_h2r[1,3],tf_h2r[2,3])
        orient = Quaternion(*tf.transformations.quaternion_from_matrix(tf_h2r) )

        #point = Point(0.5, -0.5, 1.0)
        #point.x = tf_h2r[0,3]
        #point.x = point.x+random.uniform(-0.001,0.001)

        pose.position = point
        pose.orientation = orient

        #print(pose)


def cross_product(vector1, vector2):
	result = Vector3()
	result.x = vector1.y * vector2.z - vector1.z * vector2.y
	result.y = vector1.z * vector2.x - vector1.x * vector2.z
	result.z = vector1.x * vector2.y - vector1.y * vector2.x
	return result



if __name__ == '__main__':
  
  rospy.init_node('listener', anonymous=True)
  rospy.Subscriber("/leapmotion/data", leapros, callback)

  global a
  a =0
  
  rate= rospy.Rate(100, True) # 10hz

  while not rospy.is_shutdown():
      a+=1
      print(a)
      now = datetime.datetime.now()
      print('data recieved on:', now)
      print(pose)
      group.set_pose_target(pose)
      group.go(True)
      rate.sleep()

  #rospy.spin()

moveit_commander.roscpp_shutdown()
