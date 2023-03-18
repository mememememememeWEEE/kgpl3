#include "shader_program.hpp"

[[nodiscard]] GLuint KGPL::Render::ShaderUtil::CreateProgram(
		GLuint VertShader, GLuint FragShader, 
		GLuint GeoShader, bool debug
) {

	GLuint program = glCreateProgram();

	glAttachShader(program, VertShader);
	glAttachShader(program, FragShader);

	if (GeoShader != NULL) glAttachShader(program, GeoShader);

	glLinkProgram(program);

	if (debug) {
		GLint success;
		char log[512];
		glGetProgramiv(program, GL_LINK_STATUS, &success);

		if (!success) {
			glGetProgramInfoLog(program, 512, NULL, log);
			KGPL_LOG_ERROR("Error linking shader program:\n\n%s", log);
			return NULL;
		}
	}

	glDeleteShader(VertShader);
	glDeleteShader(FragShader);
	if (GeoShader != NULL) glDeleteShader(GeoShader);

	return program;
}