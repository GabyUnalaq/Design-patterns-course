cmake_minimum_required(VERSION 3.10)
project(Design_patterns)

set(CMAKE_SUPPRESS_REGENERATION true)
set(CMAKE_CXX_STANDARD 14)

# Add designs
add_subdirectory(Builder)
add_subdirectory(Prototype)

# Add other
#add_subdirectory(<>)
