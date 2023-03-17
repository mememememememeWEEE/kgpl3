#ifndef KGPL_GLOBAL_H
#define KGPL_GLOBAL_H
#include "../kgpl.h"

namespace KGPL { namespace PRIVATE {
	extern bool Initialized;

	extern uint32_t WindowWidth;
	extern uint32_t WindowHeight;

	extern GLFWwindow* Window;
} };

#endif