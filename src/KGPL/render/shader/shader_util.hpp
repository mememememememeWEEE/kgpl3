#ifndef KGPL_SHADERUTILS_H
#define KGPL_SHADERUTILS_H
#include "../renderer.hpp"

namespace KGPL {
	inline namespace Render {
		inline namespace ShaderUtil {
			[[nodiscard]] GLuint CompileVertexShader(const char* source, bool debug = false);
			[[nodiscard]] GLuint CompileFragmentShader(const char* source, bool debug = false);
		}
	}
}

#endif