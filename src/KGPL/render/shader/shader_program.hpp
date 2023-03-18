#ifndef KGPL_SHADERPROGRAM_H
#define KGPL_SHADERPROGRAM_H
#include "../renderer.hpp"

namespace KGPL {
	inline namespace Render {
		namespace ShaderUtil {
			[[nodiscard]] GLuint CreateProgram(
				GLuint VertShader, GLuint FragShader, 
				GLuint GeoShader, bool debug = false);
		}
	}
}

#endif