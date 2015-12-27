cmake_minimum_required(VERSION 2.8)
project(hello_world)

set(SOURCES src/main.cpp include/domashak12_13.h src/domashka12_13.cpp)
include_directories("include/")

add_executable(main ${SOURCES})



