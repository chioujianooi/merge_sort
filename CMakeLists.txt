cmake_minimum_required (VERSION 2.8)
project (CMakeHelloWorld)

#version number
set (CMakeHelloWorld_VERSION_MAJOR 1)
set (CMakeHelloWorld_VERSION_MINOR 0)


#indicate the entry point for the executable
add_executable (CMakeHelloWorld hello_world.cpp)

# Indicate which libraries to include during the link process.
