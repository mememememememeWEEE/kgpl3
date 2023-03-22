#ifndef KGPL_RENDERER_H
#define KGPL_RENDERER_H

//c stdlib
#include "../common.h"

#include "shader/shaders.hpp"
#include "shader/compile_shader.hpp"
#include "shader/shader_program.hpp"

#include "renderer_render.hpp"

#include "2D/2D.hpp"

#include "../kgpl.h"

namespace KGPL { 
	inline namespace Render {
		bool RendererInit(void);
		void RendererQuit(void);
	}; 
};

#endif