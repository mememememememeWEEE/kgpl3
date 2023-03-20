#ifndef KGPL_SCENE_H
#define KGPL_SCENE_H
#include "../kgpl.h"

namespace KGPL {
	class Scene {
	public:
		Scene(const ShadersPath Shaders2D, const ShadersPath Shaders3D, bool two = true, bool three = true);
		Scene(const ShadersRaw Shaders2D, const ShadersRaw Shaders3D, bool two = true, bool three = true);
		~Scene();

	//public for now
	public:
		GLuint ShaderProgram2D;
		GLuint ShaderProgram3D;
	};
}

#endif