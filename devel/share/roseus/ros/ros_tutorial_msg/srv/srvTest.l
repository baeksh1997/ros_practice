;; Auto-generated. Do not edit!


(when (boundp 'ros_tutorial_msg::srvTest)
  (if (not (find-package "ROS_TUTORIAL_MSG"))
    (make-package "ROS_TUTORIAL_MSG"))
  (shadow 'srvTest (find-package "ROS_TUTORIAL_MSG")))
(unless (find-package "ROS_TUTORIAL_MSG::SRVTEST")
  (make-package "ROS_TUTORIAL_MSG::SRVTEST"))
(unless (find-package "ROS_TUTORIAL_MSG::SRVTESTREQUEST")
  (make-package "ROS_TUTORIAL_MSG::SRVTESTREQUEST"))
(unless (find-package "ROS_TUTORIAL_MSG::SRVTESTRESPONSE")
  (make-package "ROS_TUTORIAL_MSG::SRVTESTRESPONSE"))

(in-package "ROS")





(defclass ros_tutorial_msg::srvTestRequest
  :super ros::object
  :slots (_a _b ))

(defmethod ros_tutorial_msg::srvTestRequest
  (:init
   (&key
    ((:a __a) 0)
    ((:b __b) 0)
    )
   (send-super :init)
   (setq _a (round __a))
   (setq _b (round __b))
   self)
  (:a
   (&optional __a)
   (if __a (setq _a __a)) _a)
  (:b
   (&optional __b)
   (if __b (setq _b __b)) _b)
  (:serialization-length
   ()
   (+
    ;; int32 _a
    4
    ;; int32 _b
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _a
       (write-long _a s)
     ;; int32 _b
       (write-long _b s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _a
     (setq _a (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _b
     (setq _b (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass ros_tutorial_msg::srvTestResponse
  :super ros::object
  :slots (_result ))

(defmethod ros_tutorial_msg::srvTestResponse
  (:init
   (&key
    ((:result __result) 0)
    )
   (send-super :init)
   (setq _result (round __result))
   self)
  (:result
   (&optional __result)
   (if __result (setq _result __result)) _result)
  (:serialization-length
   ()
   (+
    ;; int32 _result
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _result
       (write-long _result s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _result
     (setq _result (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass ros_tutorial_msg::srvTest
  :super ros::object
  :slots ())

(setf (get ros_tutorial_msg::srvTest :md5sum-) "a7d7d7065d45755acef7d4dcf908162a")
(setf (get ros_tutorial_msg::srvTest :datatype-) "ros_tutorial_msg/srvTest")
(setf (get ros_tutorial_msg::srvTest :request) ros_tutorial_msg::srvTestRequest)
(setf (get ros_tutorial_msg::srvTest :response) ros_tutorial_msg::srvTestResponse)

(defmethod ros_tutorial_msg::srvTestRequest
  (:response () (instance ros_tutorial_msg::srvTestResponse :init)))

(setf (get ros_tutorial_msg::srvTestRequest :md5sum-) "a7d7d7065d45755acef7d4dcf908162a")
(setf (get ros_tutorial_msg::srvTestRequest :datatype-) "ros_tutorial_msg/srvTestRequest")
(setf (get ros_tutorial_msg::srvTestRequest :definition-)
      "int32 a
int32 b
---
int32 result

")

(setf (get ros_tutorial_msg::srvTestResponse :md5sum-) "a7d7d7065d45755acef7d4dcf908162a")
(setf (get ros_tutorial_msg::srvTestResponse :datatype-) "ros_tutorial_msg/srvTestResponse")
(setf (get ros_tutorial_msg::srvTestResponse :definition-)
      "int32 a
int32 b
---
int32 result

")



(provide :ros_tutorial_msg/srvTest "a7d7d7065d45755acef7d4dcf908162a")


