#ifndef KGPL_TEXTURE2D_H
#define KGPL_TEXTURE2D_H
#include "../renderer.hpp"

namespace KGPL {
	namespace Render2D {
		struct Texture2D final {
			Texture2D(const char* path = NULL);
			~Texture2D();

			GLuint texture;
		};
	}
}

#endif