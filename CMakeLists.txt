cmake_minimum_required(VERSION 3.12)
project(KGPL-demo)

add_subdirectory(src/KGPL)

add_executable(${PROJECT_NAME} src/ex.cpp)

target_link_libraries(${PROJECT_NAME} KGPL)