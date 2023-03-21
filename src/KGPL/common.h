#define KGPL_LOG_INFO(...)  fprintf(stdout, "\x1b[0;30;46m" "INFO:  " "\x1b[0m" "  " __VA_ARGS__); fprintf(stdout, "\n")
#define KGPL_LOG_ERROR(...) fprintf(stderr, "\x1b[0;30;41m" "ERROR: " "\x1b[0m" "  " __VA_ARGS__); fprintf(stderr, "\n")

//c stdlib
extern "C" {
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
};

//dependency headers
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>