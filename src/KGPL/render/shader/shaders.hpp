#ifndef KGPL_SHADER_H
#define KGPL_SHADER_H
#include "../renderer.hpp"

namespace KGPL {
	inline namespace Render {
		struct ShadersPath final {
			const char* VertexShader;
			const char* FragmentShader;
			const char* GeometryShader;
		};

		struct ShadersRaw final {
			const char* VertexShader;
			const char* FragmentShader;
			const char* GeometryShader;
		};
	}
}

#endif