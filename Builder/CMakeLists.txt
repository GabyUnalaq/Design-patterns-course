include_directories(inc)

set(CodeBuilder src/CodeBuilder.cpp inc/CodeBuilder.hpp)

add_executable(Builder src/main.cpp ${CodeBuilder})