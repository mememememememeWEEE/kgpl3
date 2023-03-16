cmake_minimum_required(VERSION 3.12)
project(KGPL LANGUAGES C CXX)

file(GLOB_RECURSE KGPL_SRC ${PROJECT_SOURCE_DIR} *.c *.cpp)

find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)

add_library(KGPL STATIC ${KGPL_SRC})

target_link_libraries(KGPL
	GLEW::GLEW
	glfw
	${OPENGL_gl_LIBRARY}
)

target_include_directories(KGPL PUBLIC
	${GLEW_INCLUDE_DIRS}
	${GLFW_INCLUDE_DIRS}
	${OPENGL_INCLUDE_DIRS}
)