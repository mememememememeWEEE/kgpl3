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

	inline bool setVertexShader2D(GLuint shader) {
		if (shader == NULL) { KGPL_LOG_ERROR("Vertex shader provided is `NULL`"); return false; }
		KGPL::PRIVATE::CurVertexShader2D = shader; return true;
	}

	inline bool setFragmentShader2D(GLuint shader) {
		if (shader == NULL) { KGPL_LOG_ERROR("Fragment shader provided is `NULL`"); return false; }
		KGPL::PRIVATE::CurFragmentShader2D = shader; return true;
	}

	inline bool setGeometryShader2D(GLuint shader) {
		if (shader == NULL) { KGPL_LOG_ERROR("Geometry shader provided is `NULL`"); return false; }
		KGPL::PRIVATE::CurGeometryShader2D = shader; return true;
	}

	inline bool setVertexShader3D(GLuint shader) {
		if (shader == NULL) { KGPL_LOG_ERROR("Vertex shader provided is `NULL`"); return false; }
		KGPL::PRIVATE::CurVertexShader3D = shader; return true;
	}

	inline bool setFragmentShader3D(GLuint shader) {
		if (shader == NULL) { KGPL_LOG_ERROR("Fragment shader provided is `NULL`"); return false; }
		KGPL::PRIVATE::CurFragmentShader3D = shader; return true;
	}

	inline bool setGeometryShader3D(GLuint shader) {
		if (shader == NULL) { KGPL_LOG_ERROR("Geometry shader provided is `NULL`"); return false; }
		KGPL::PRIVATE::CurGeometryShader3D = shader; return true;
	}

#pragma endregion

};

#endif