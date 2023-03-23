#include "core.hpp"

bool KGPL::quit(void) {
	namespace KGPLm = KGPL::PRIVATE;

	KGPL_LOG_INFO("Quitting KGPL");
	KGPL::Render::RendererQuit();

	glfwDestroyWindow(KGPLm::Window);
	glfwTerminate();
	KGPL_LOG_INFO("Quitted KGPL successfully");
	return true;
}
