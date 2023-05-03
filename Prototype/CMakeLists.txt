include_directories(inc)

set(Line src/Line.cpp inc/Line.hpp)

add_executable(Prototype src/main.cpp ${Line})