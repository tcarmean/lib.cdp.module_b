cmake_minimum_required(VERSION 3.15)
project(module_b)

set(CMAKE_C_STANDARD 99)

add_library(module_b SHARED src/module_b.c)
target_include_directories(module_b PUBLIC
                            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
                            $<INSTALL_INTERFACE:include>
                            )

set_target_properties(module_b PROPERTIES PUBLIC_HEADER "src/module_b.h")

install(TARGETS module_b)
