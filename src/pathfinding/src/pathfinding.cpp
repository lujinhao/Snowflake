/*
 * Created By: Gareth Ellis
 * Created On: June 1, 2017
 * Description: TODO
 */

#include <Pathfinding.h>


int main(int argc, char **argv){
    // Setup your ROS node
    std::string node_name = "pathfinding";

    // Create an instance of your class
    Pathfinding pathfinding(argc, argv, node_name);

    // Start up ros. This will continue to run until the node is killed
    ros::spin();

    // Once the node stops, return 0
    return 0;
}