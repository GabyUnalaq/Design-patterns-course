include_directories(inc)

set(Geometry src/Geometry.cpp inc/Geometry.hpp)

add_executable(Adapter src/main.cpp ${Geometry})