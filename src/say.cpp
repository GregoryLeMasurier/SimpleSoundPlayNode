#include <ros/ros.h>
#include <sound_play/sound_play.h>

int main (int argc, char** argv){
    ros::init(argc, argv, "speech");
    sound_play::SoundClient sc;

    ros::Duration(3).sleep();

    sc.say("This is a test message!");

    ros::spin();
    return 0;
}