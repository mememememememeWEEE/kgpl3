#include "renderer.hpp"

void KGPL::Render::RendererQuit(void) {
	namespace KGPLm = KGPL::PRIVATE;

	glDeleteProgram(KGPLm::ShaderProgram2D);
	glDeleteProgram(KGPLm::ShaderProgram3D);
}