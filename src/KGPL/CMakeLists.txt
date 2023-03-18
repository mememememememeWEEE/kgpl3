cmake_minimum_required(VERSION 3.12)
project(KGPL LANGUAGES C CXX VERSION 0.0.1 DESCRIPTION KGPL)

file(GLOB_RECURSE KGPL_SRC ${PROJECT_SOURCE_DIR} *.cpp)
file(GLOB_RECURSE KGPL_H   ${PROJECT_SOURCE_DIR} *.h *.hpp)

find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)
find_package(glm REQUIRED)

add_library(KGPL STATIC ${KGPL_SRC})

target_link_libraries(KGPL
	${GLEW_LIBRARIES}
	glfw
	${GLM_LIBRARIES}
	${OPENGL_gl_LIBRARY}
)

target_include_directories(KGPL PUBLIC
	${GLEW_INCLUDE_DIRS}
	${GLFW_INCLUDE_DIRS}
	${GLM_INCLUDE_DIRS}
	${OPENGL_INCLUDE_DIRS}
)