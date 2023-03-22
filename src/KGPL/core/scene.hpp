#ifndef KGPL_SCENE_H
#define KGPL_SCENE_H
#include "../kgpl.h"

namespace KGPL {
	class Scene {
	public:
		Scene(const ShadersPath Shaders2D, const ShadersPath Shaders3D, bool debug, bool two, bool three);
		~Scene();

	//public for now
	public:
		bool Supports2D;
		bool Supports3D;

		GLuint ShaderProgram2D;
		GLuint ShaderProgram3D;
	};
}

#endif