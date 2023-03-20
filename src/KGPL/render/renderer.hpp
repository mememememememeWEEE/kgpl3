#ifndef KGPL_RENDERER_H
#define KGPL_RENDERER_H
#include "../kgpl.h"

#include "shader/shaders.hpp"
#include "shader/compile_shader.hpp"
#include "shader/shader_program.hpp"

#include "renderer_render.hpp"

#include "2D/2D.hpp"

namespace KGPL { 
	inline namespace Render {
		bool RendererInit(void);
		void RendererQuit(void);
	}; 
};
#endif