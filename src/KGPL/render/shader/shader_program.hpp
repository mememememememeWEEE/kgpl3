#ifndef KGPL_SHADERPROGRAM_H
#define KGPL_SHADERPROGRAM_H
#include "../renderer.hpp"

namespace KGPL {
	inline namespace Render {
		namespace ShaderProgram {
			//this will create a program and then bind the shaders to the program and then link the program
			GLuint CreateProgram(GLuint VertShader, GLuint FragShader, GLuint GeoShader);
			bool LinkProgram(GLuint program, GLuint VertShader, GLuint FragShader, GLuint GeoShader, bool debug = false);
		}
	}
}

#endif