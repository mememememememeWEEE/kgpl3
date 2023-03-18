#include "quit.hpp"

bool KGPL::quit(void) {
	namespace KGPLm = KGPL::PRIVATE;

	KGPL_LOG_INFO("Quitting KGPL");
	glfwDestroyWindow(KGPLm::Window);
	glfwTerminate();
	KGPL_LOG_INFO("Quitted KGPL successfully");
	return true;
}
