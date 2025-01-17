cmake_minimum_required(VERSION 3.15)
project(main C)

set(CMAKE_C_STANDARD 99)

# Include Conan dependencies
find_package(CMakeDeps)
find_package(CMakeToolchain)

add_library(module_b src/module_b.c)
