#ifndef KGPL_TEXTURE2D_H
#define KGPL_TEXTURE2D_H
#include "../renderer.hpp"

namespace KGPL {
	namespace Render2D {
		class Texture2D {
		public:
			Texture2D(const char* path);
			~Texture2D();

			GLuint texture;
		};
	}
}

#endif