#ifndef KGPL_ENTITY2D_H
#define KGPL_ENTITY2D_H
#include "../../common.h"
#include "../../render/2D/texture2D.hpp"

namespace KGPL {
	namespace Render2D {
		struct Texture2D;
	}

	class Entity2D {
	public:
		Entity2D();
		~Entity2D();

		void BindTexture();

	public:
		bool visible;
		Render2D::Texture2D Texture;
	};
}

#endif