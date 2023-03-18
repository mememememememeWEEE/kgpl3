#include "compile_shader.hpp"

#pragma region CompileRaw
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
			KGPL_LOG_ERROR("Error compiling vertex shader:\n\n%s", log);
			return 0;
		}
	}

	if(debug) KGPL_LOG_INFO("Successfully compiled vertex shader");
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
			KGPL_LOG_ERROR("Error compiling fragment shader:\n\n%s", log);
			return 0;
		}
	}

	if(debug) KGPL_LOG_INFO("Successfully compiled fragment shader");
	return FragmentShader;
}

[[nodiscard]] GLuint KGPL::Render::ShaderUtil::CompileGeometryShader(const char* source, bool debug) {
	GLuint GeometryShader = glCreateShader(GL_GEOMETRY_SHADER);

	if (GeometryShader == 0) {
		KGPL_LOG_ERROR("Error creating geometry shader");
		return 0;
	}

	glShaderSource(GeometryShader, 1, &source, NULL);
	glCompileShader(GeometryShader);

	if (debug) {
		GLint success;
		char log[512];
		glGetShaderiv(GeometryShader, GL_COMPILE_STATUS, &success);

		if (!success) {
			glGetShaderInfoLog(GeometryShader, 512, NULL, log);
			KGPL_LOG_ERROR("Error compiling geometry shader:\n\n%s", log);
			return 0;
		}
	}

	if(debug) KGPL_LOG_INFO("Successfully compiled geometry shader");
	return GeometryShader;
}
#pragma endregion

#pragma region CompileFile
[[nodiscard]] GLuint KGPL::Render::ShaderUtil::CompileVertexShaderFromFile(const char* path, bool debug) {
	FILE* f;
	size_t s;
	char* b;
	GLuint res;
	
	f = fopen(path, "rb");
	if (!f) {
		KGPL_LOG_ERROR("Failed to open the file: %s", path); return 0;
	}

	fseek(f, 0L, SEEK_END);
	s = ftell(f);
	rewind(f);

	b = (char*) calloc(1, s + 1);
	if (!b) {
		fclose(f);
		KGPL_LOG_ERROR("Failed to allocate memory");
		return 0;
	}

	if (1 != fread(b, s, 1, f)) {
		fclose(f); free(b); 
		KGPL_LOG_ERROR("Failed to read the file %s", path);
		return 0;
	}

	res = KGPL::Render::ShaderUtil::CompileVertexShader(b, debug);

	fclose(f);
	free(b);

	return res;
}

[[nodiscard]] GLuint KGPL::Render::ShaderUtil::CompileFragmentShaderFromFile(const char* path, bool debug) {
	FILE* f;
	size_t s;
	char* b;
	GLuint res;

	f = fopen(path, "rb");
	if (!f) {
		KGPL_LOG_ERROR("Failed to open the file: %s", path); return 0;
	}

	fseek(f, 0L, SEEK_END);
	s = ftell(f);
	rewind(f);

	b = (char*)calloc(1, s + 1);
	if (!b) {
		fclose(f);
		KGPL_LOG_ERROR("Failed to allocate memory");
		return 0;
	}

	if (1 != fread(b, s, 1, f)) {
		fclose(f); free(b);
		KGPL_LOG_ERROR("Failed to read the file %s", path);
		return 0;
	}

	res = KGPL::Render::ShaderUtil::CompileFragmentShader(b, debug);

	fclose(f);
	free(b);

	return res;
}

[[nodiscard]] GLuint KGPL::Render::ShaderUtil::CompileGeometryShaderFromFile(const char* path, bool debug) {
	FILE* f;
	size_t s;
	char* b;
	GLuint res;

	f = fopen(path, "rb");
	if (!f) {
		KGPL_LOG_ERROR("Failed to open the file: %s", path); return 0;
	}

	fseek(f, 0L, SEEK_END);
	s = ftell(f);
	rewind(f);

	b = (char*)calloc(1, s + 1);
	if (!b) {
		fclose(f);
		KGPL_LOG_ERROR("Failed to allocate memory");
		return 0;
	}

	if (1 != fread(b, s, 1, f)) {
		fclose(f); free(b);
		KGPL_LOG_ERROR("Failed to read the file %s", path);
		return 0;
	}

	res = KGPL::Render::ShaderUtil::CompileGeometryShader(b, debug);

	fclose(f);
	free(b);

	return res;
}
#pragma endregion