#include "init.hpp"

bool KGPL::init(const InitArgs& args) noexcept {
	namespace KGPLm = KGPL::PRIVATE;

	KGPL_LOG_INFO("Initializing KGPL");
	KGPLm::WindowWidth = args.width; KGPLm::WindowHeight = args.height; KGPLm::Initialized = true;
	/*KGPL_LOG_INFO("Creating window with args: \n\t\t"
					"width  = % d\n\t\t"
					"height = % d\n\t\t"
					"title  = % s\n\t\t"
					"OpenGL requested version = %d.%d"
					"\n",
		KGPLm::WindowWidth, KGPLm::WindowHeight, args.title, args.OpenGL_VersionMajor, args.OpenGL_VersionMinor);*/

	if (!glfwInit()) goto err_t;

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, args.OpenGL_VersionMajor);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, args.OpenGL_VersionMinor);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	KGPLm::Window = glfwCreateWindow(KGPLm::WindowWidth, KGPLm::WindowHeight, args.title, NULL, NULL);
	if (!KGPLm::Window) goto err_t;
	glfwMakeContextCurrent(KGPLm::Window);
	KGPL_LOG_INFO("GLFW initialized successfully");

	glewExperimental = GL_TRUE;
	GLenum err = glewInit();
	if (err != GLEW_OK) goto err_y;

	KGPL_LOG_INFO("GLEW initialized successfully");
	KGPL_LOG_INFO("KGPL initialized successfully");
	/*KGPL_LOG_INFO("OpenGL Version: %s", glGetString(GL_VERSION));
	KGPL_LOG_INFO("OpenGL Renderer: %s", glGetString(GL_RENDERER));*/
	return true;
	
err_t:
	glfwTerminate(); 
	KGPL_LOG_ERROR("Failed to initialize GLFW");
	goto err;
err_y:
	KGPL_LOG_ERROR("Failed to initialize GLEW");
	KGPL_LOG_ERROR("GLEW ERROR: \n%s", glewGetErrorString(err));
	goto err;
err:
	KGPL_LOG_ERROR("Failed to initialize KGPL");
	return false;
}
