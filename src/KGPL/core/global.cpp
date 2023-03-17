#include "../kgpl.h"

namespace KGPL {
	namespace PRIVATE {
		bool Initialized = false;

		uint32_t WindowWidth;
		uint32_t WindowHeight;

		GLFWwindow* Window;

		GLuint ShaderProgram2D;
		GLuint ShaderProgram3D;

		GLuint CurVertexShader;
		GLuint CurFragmentShader;
	}
}