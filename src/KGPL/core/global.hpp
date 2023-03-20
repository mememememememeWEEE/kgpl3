#ifndef KGPL_GLOBAL_H
#define KGPL_GLOBAL_H
#include "../kgpl.h"

namespace KGPL {
	namespace PRIVATE {
		extern bool Initialized;

		extern uint32_t WindowWidth;
		extern uint32_t WindowHeight;


		extern Scene* CurrentScene;

		extern GLFWwindow* Window;

	}

	[[nodiscard]] inline auto getWindow() noexcept {
		return KGPL::PRIVATE::Window;
	}

	[[nodiscard]] inline auto getCurrentScene() noexcept {
		return KGPL::PRIVATE::CurrentScene;
	}
};

#endif