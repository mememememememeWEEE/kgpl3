#ifndef __KGPL__
#define __KGPL__

//c stdlib
extern "C" {
	#include <stdio.h>
	#include <stdlib.h>
	#include <stdint.h>
}

//dependency headers
#include <GL/glew.h>
#include <GLFW/glfw3.h>

//library headers
#include "util/log.h"
#include "core/global.hpp"
#include "core/init.hpp"
#include "core/quit.hpp"
#include "render/renderer.hpp"

#endif