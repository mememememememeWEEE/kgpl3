cmake_minimum_required(VERSION 3.12)
project(KGPL-demo)

add_subdirectory(src)

add_executable(KGPL-demo ex.cpp)

target_link_libraries(KGPL-demo KGPL)