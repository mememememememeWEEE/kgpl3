#include "init.hpp"

bool KGPL::init(uint32_t width, uint32_t height) {
	KGPL_LOG_INFO("initializing KGPL");
	KGPL::PRIVATE::WindowWidth = width; KGPL::PRIVATE::WindowHeight = height; KGPL::PRIVATE::Initialized = true;
	if (!glfwInit()) goto err;
	KGPL::PRIVATE::Window = glfwCreateWindow(width, height, "KGPL", NULL, NULL);
	if (!KGPL::PRIVATE::Window) goto err_t;
	glfwMakeContextCurrent(KGPL::PRIVATE::Window);

	KGPL_LOG_INFO("KGPL initialized successfully");
	return true;
	
err_t:
	glfwTerminate();
err:
	KGPL_LOG_ERROR("failed to initialize KGPL");
	return false;
}
