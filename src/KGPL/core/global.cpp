#include "../common.h"
#include "scene.hpp"

namespace KGPL {
	namespace PRIVATE {
		bool Initialized = false;

		uint32_t WindowWidth;
		uint32_t WindowHeight;

		GLFWwindow* Window;

		KGPL::Scene* CurrentScene;
	}
}