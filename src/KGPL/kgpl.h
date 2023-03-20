#ifndef KGPL_H
#define KGPL_H

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

//library headers
#include "util/log.h"

#include "render/renderer.hpp"

#include "core/scene.hpp"
#include "core/global.hpp"
#include "core/init.hpp"
#include "core/quit.hpp"
#include "core/next_frame.hpp"

#endif