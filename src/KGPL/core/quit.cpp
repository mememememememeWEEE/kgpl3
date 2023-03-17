#include "quit.hpp"

void KGPL::quit(void) {
	KGPL_LOG_INFO("Quitting KGPL");
	glfwDestroyWindow(KGPL::PRIVATE::Window);
	glfwTerminate();
}
