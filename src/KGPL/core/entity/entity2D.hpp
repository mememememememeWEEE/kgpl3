#ifndef KGPL_ENTITY2D_H
#define KGPL_ENTITY2D_H
#include "../../kgpl.h"

namespace KGPL {
	class Entity2D {
	public:
		Entity2D();
		~Entity2D();

		void BindTexture();

	public:
		bool visible;
		Render::Render2D::Texture2D Texture;
	};
}

#endif