#include "init.hpp"

bool KGPL::init(const InitArgs& args) noexcept {
	namespace KGPLm = KGPL::PRIVATE;

	KGPL_LOG_INFO("Initializing KGPL");
	KGPLm::WindowWidth = args.width; KGPLm::WindowHeight = args.height; KGPLm::Initialized = true;
	KGPL_LOG_INFO("Creating window with args: \nwidth=%d\nheight=%d\ntitle=%s", KGPLm::WindowWidth, KGPLm::WindowHeight, args.title);

	if (!glfwInit()) goto err_t;
	KGPLm::Window = glfwCreateWindow(KGPLm::WindowWidth, KGPLm::WindowHeight, args.title, NULL, NULL);
	if (!KGPLm::Window) goto err_t;
	glfwMakeContextCurrent(KGPLm::Window);
	KGPL_LOG_INFO("GLFW initialized successfully");

	if (glewInit() != GLEW_OK) goto err_y;

	KGPL_LOG_INFO("GLEW initialized successfully");
	KGPL_LOG_INFO("KGPL initialized successfully");
	return true;
	
err_t:
	glfwTerminate(); 
	KGPL_LOG_ERROR("Failed to initialize GLFW");
	goto err;
err_y:
	KGPL_LOG_ERROR("Failed to initialize GLEW");
	goto err;
err:
	KGPL_LOG_ERROR("Failed to initialize KGPL");
	return false;
}
