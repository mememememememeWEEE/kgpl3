#ifndef KGPL_GLOBAL_H
#define KGPL_GLOBAL_H
#include "../kgpl.h"

class Scene;

namespace KGPL {
	namespace PRIVATE {
		extern bool Initialized;

		extern uint32_t WindowWidth;
		extern uint32_t WindowHeight;
		extern GLFWwindow* Window;

		extern Scene* CurrentScene;
	}

	[[nodiscard]] inline auto getWindow() noexcept {
		return KGPL::PRIVATE::Window;
	}

	[[nodiscard]] inline auto getCurrentScene() noexcept {
		return KGPL::PRIVATE::CurrentScene;
	}
};

#endif