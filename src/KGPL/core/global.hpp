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
		
		extern GLuint CurVertexShader2D;
		extern GLuint CurFragmentShader2D;
		extern GLuint CurGeometryShader2D;
		
		extern GLuint CurVertexShader3D;
		extern GLuint CurFragmentShader3D;
		extern GLuint CurGeometryShader3D;
	}

#pragma region getters
	[[nodiscard]] inline auto getWindow() noexcept {
		return KGPL::PRIVATE::Window;
	}
#pragma endregion

#pragma region setters

	inline void setShaderProgram2D(GLuint program) {
		KGPL::PRIVATE::ShaderProgram2D = program;
	}

	inline void setShaderProgram3D(GLuint program) {
		KGPL::PRIVATE::ShaderProgram3D = program;
	}

	inline void setVertexShader2D(GLuint shader) {
		KGPL::PRIVATE::CurVertexShader2D = shader;
	}

	inline void setFragmentShader2D(GLuint shader) {
		KGPL::PRIVATE::CurFragmentShader2D = shader;
	}

	inline void setGeometryShader2D(GLuint shader) {
		KGPL::PRIVATE::CurGeometryShader2D = shader;
	}

	inline void setVertexShader3D(GLuint shader) {
		KGPL::PRIVATE::CurVertexShader3D = shader;
	}

	inline void setFragmentShader3D(GLuint shader) {
		KGPL::PRIVATE::CurFragmentShader3D = shader;
	}

	inline void setGeometryShader3D(GLuint shader) {
		KGPL::PRIVATE::CurGeometryShader3D = shader;
	}

#pragma endregion

};

#endif