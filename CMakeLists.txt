cmake_minimum_required(VERSION 3.15)
project(module_b)

set(CMAKE_C_STANDARD 99)

add_library(module_b src/module_b.c)
target_include_directories(module_b PUBLIC include)


install(TARGETS module_b)