#include "renderer_init.hpp"

bool KGPL::Render::RendererInit() {
	system("echo %cd%");
	KGPL::setVertexShader2D(KGPL::Render::ShaderUtil::CompileVertexShaderFromFile(R"(../shader/Vert2D.glsl)", true));
	KGPL::setFragmentShader2D(KGPL::Render::ShaderUtil::CompileFragmentShaderFromFile(R"(C:\Users\rando\OneDrive\Documents\GitHub\kgpl3\shader\Frag2D.glsl)", true));
	return true;
}