#ifndef KGPL_SCENE_H
#define KGPL_SCENE_H
#include "../common.h"
#include "../render/shader/shaders.hpp"

namespace KGPL {
	class Entity2D;

	class Scene final {
	public:
		Scene(const ShadersPath Shaders2D, const ShadersPath Shaders3D, bool debug, bool two, bool three);
		~Scene();

	//public for now
	public:
		bool Supports2D;
		bool Supports3D;

		std::vector<Entity2D*> Entities_2D;

		GLuint ShaderProgram2D;
		GLuint ShaderProgram3D;
	};
}

#endif