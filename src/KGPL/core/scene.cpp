#include "scene.hpp"

namespace RSU = KGPL::Render::ShaderUtil;

#pragma region constructors
KGPL::Scene::Scene(const ShadersPath Shaders2D, const ShadersPath Shaders3D, bool debug, bool two, bool three) {
	if (two) 
		ShaderProgram2D = RSU::CreateProgram(
			RSU::CompileVertexShaderFromFile(Shaders2D.VertexShader, debug),
			RSU::CompileFragmentShaderFromFile(Shaders2D.FragmentShader, debug),
			RSU::CompileGeometryShaderFromFile(Shaders2D.GeometryShader, debug)
		), Supports2D = true; else ShaderProgram2D = NULL;

	if (three)
		ShaderProgram3D = RSU::CreateProgram(
			RSU::CompileVertexShaderFromFile(Shaders3D.VertexShader, debug),
			RSU::CompileFragmentShaderFromFile(Shaders3D.FragmentShader, debug),
			RSU::CompileGeometryShaderFromFile(Shaders3D.GeometryShader, debug)
		), Supports3D = true; else ShaderProgram3D = NULL;
}

//KGPL::Scene::Scene(const ShadersRaw Shaders2D, const ShadersRaw Shaders3D, bool two, bool three) {
//	if (two)
//		ShaderProgram2D = RSU::CreateProgram(
//			RSU::CompileVertexShader(Shaders2D.VertexShader),
//			RSU::CompileFragmentShader(Shaders2D.FragmentShader),
//			RSU::CompileGeometryShader(Shaders2D.GeometryShader)
//		); else ShaderProgram2D = NULL;
//
//	if (three)
//		ShaderProgram3D = RSU::CreateProgram(
//			RSU::CompileVertexShader(Shaders3D.VertexShader),
//			RSU::CompileFragmentShader(Shaders3D.FragmentShader),
//			RSU::CompileGeometryShader(Shaders3D.GeometryShader)
//		); else ShaderProgram3D = NULL;
//}
#pragma endregion

KGPL::Scene::~Scene() {
	if (ShaderProgram2D != NULL) glDeleteProgram(ShaderProgram2D);
	if (ShaderProgram3D != NULL) glDeleteProgram(ShaderProgram3D);
}