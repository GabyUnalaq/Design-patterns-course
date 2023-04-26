include_directories(inc)

set(Person src/Person.cpp inc/Person.hpp)

add_executable(Factory src/main.cpp ${Person})