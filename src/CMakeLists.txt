cmake_minimum_required(VERSION 3.12)
project(KGPL)

file(GLOB_RECURSE KGPL_SRC ${PROJECT_SOURCE_DIR}/KGPL *.cpp)

add_library(KGPL STATIC ${KGPL_SRC})