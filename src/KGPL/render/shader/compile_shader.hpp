#ifndef KGPL_SHADERUTILS_H
#define KGPL_SHADERUTILS_H
#include "../renderer.hpp"

namespace KGPL {
	inline namespace Render {
		namespace ShaderUtil {
			[[nodiscard]] GLuint CompileVertexShader(const char* source, bool debug = false);
			[[nodiscard]] GLuint CompileFragmentShader(const char* source, bool debug = false);
			[[nodiscard]] GLuint CompileGeometryShader(const char* source, bool debug = false);

			[[nodiscard]] GLuint CompileVertexShaderFromFile(const char* path, bool debug = false);
			[[nodiscard]] GLuint CompileFragmentShaderFromFile(const char* path, bool debug = false);
			[[nodiscard]] GLuint CompileGeometryShaderFromFile(const char* path, bool debug = false);
		}
	}
}

#endif