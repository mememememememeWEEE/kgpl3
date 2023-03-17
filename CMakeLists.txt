cmake_minimum_required(VERSION 3.12)
project(KGPL-demo)

#okay where are FindGLFW.cmake and FindGLEW.cmake bruh
SET(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake/")

add_subdirectory(src/KGPL)

add_executable(${PROJECT_NAME} src/ex.cpp)

target_link_libraries(${PROJECT_NAME} KGPL)