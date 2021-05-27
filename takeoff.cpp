#include <gnc_functions.hpp>

int main(int argc, char** argv)
{
	ros::init(argc, argv, "gnc_node");
	ros::NodeHandle gnc_node("~");
	
	init_publisher_subscriber(gnc_node);

	wait4connect();

	wait4start();

	initialize_local_frame();

  takeoff(3);

  return 0;
}
