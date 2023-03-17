#ifndef KGPL_GLOBAL_H
#define KGPL_GLOBAL_H
#include "../kgpl.h"

namespace KGPL {
	namespace PRIVATE {
		extern bool Initialized;

		extern uint32_t WindowWidth;
		extern uint32_t WindowHeight;

		extern GLFWwindow* Window;

		extern GLuint ShaderProgram2D;
		extern GLuint ShaderProgram3D;

		extern GLuint CurVertexShader;
		extern GLuint CurFragmentShader;
	}

	[[nodiscard]] inline auto getWindow() noexcept {
		return KGPL::PRIVATE::Window;
	}
};

#endif