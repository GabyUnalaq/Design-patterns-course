cmake_minimum_required(VERSION 3.12)
project(Design_patterns)

set(CMAKE_SUPPRESS_REGENERATION true)
set(CMAKE_CXX_STANDARD 14)

# Link boost
find_package(Boost REQUIRED)
if(Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS})
endif()

# Add designs
add_subdirectory(Builder)
add_subdirectory(Factory)
add_subdirectory(Singleton)
add_subdirectory(Prototype)
add_subdirectory(Interpreter)

# Add other
#add_subdirectory(<>)
