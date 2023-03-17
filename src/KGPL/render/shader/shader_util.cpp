#include "../renderer.hpp"

[[nodiscard]] GLuint KGPL::Render::ShaderUtil::CompileVertexShader(const char* source, bool debug) {
	GLuint VertexShader = glCreateShader(GL_VERTEX_SHADER);
	if (VertexShader == 0) {
		KGPL_LOG_ERROR("Error creating vertex shader");
		return 0;
	}

	glShaderSource(VertexShader, 1, &source, NULL);
	glCompileShader(VertexShader);

	if (debug) {
		GLint success;
		char log[512];
		glGetShaderiv(VertexShader, GL_COMPILE_STATUS, &success);

		if (!success) {
			glGetShaderInfoLog(VertexShader, 512, NULL, log);
			KGPL_LOG_ERROR("Error compiling vertex shader:\n%s", log);
			return 0;
		}
	}

	KGPL_LOG_INFO("Successfully compiled vertex shader");
	return VertexShader;
}

[[nodiscard]] GLuint KGPL::Render::ShaderUtil::CompileFragmentShader(const char* source, bool debug) {
	GLuint FragmentShader = glCreateShader(GL_FRAGMENT_SHADER);

	if (FragmentShader == 0) {
		KGPL_LOG_ERROR("Error creating fragment shader");
		return 0;
	}

	glShaderSource(FragmentShader, 1, &source, NULL);
	glCompileShader(FragmentShader);

	if (debug) {
		GLint success;
		char log[512];
		glGetShaderiv(FragmentShader, GL_COMPILE_STATUS, &success);

		if (!success) {
			glGetShaderInfoLog(FragmentShader, 512, NULL, log);
			KGPL_LOG_ERROR("Error compiling fragment shader:\n%s", log);
			return 0;
		}
	}

	KGPL_LOG_INFO("Successfully compiled fragment shader");
	return FragmentShader;
}