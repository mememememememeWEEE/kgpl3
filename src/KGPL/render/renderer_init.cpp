#include "renderer_init.hpp"

bool KGPL::Render::RendererInit() {
	namespace KGPLm = KGPL::PRIVATE;

	KGPL::setVertexShader2D(KGPL::Render::ShaderUtil::CompileVertexShaderFromFile(R"(C:\Users\rando\OneDrive\Documents\GitHub\kgpl3\shader\Vert2D.glsl)", true));
	KGPL::setFragmentShader2D(KGPL::Render::ShaderUtil::CompileFragmentShaderFromFile(R"(C:\Users\rando\OneDrive\Documents\GitHub\kgpl3\shader\Frag2D.glsl)", true));
	KGPL::setShaderProgram2D(KGPL::Render::ShaderUtil::CreateProgram(KGPLm::CurVertexShader2D, KGPLm::CurFragmentShader2D, NULL));
	return true;
}