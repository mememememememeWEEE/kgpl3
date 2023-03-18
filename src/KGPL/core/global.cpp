#include "../kgpl.h"

namespace KGPL {
	namespace PRIVATE {
		bool Initialized = false;

		uint32_t WindowWidth;
		uint32_t WindowHeight;

		GLFWwindow* Window;

		GLuint ShaderProgram2D = NULL;
		GLuint ShaderProgram3D = NULL;

		GLuint CurVertexShader2D = NULL;
		GLuint CurFragmentShader2D = NULL;
		GLuint CurGeometryShader2D = NULL;

		GLuint CurVertexShader3D = NULL;
		GLuint CurFragmentShader3D = NULL;
		GLuint CurGeometryShader3D = NULL;
	}
}