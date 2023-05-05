include_directories(inc)

set(Singleton src/Singleton.cpp inc/Singleton.hpp)

add_executable(Singleton src/main.cpp ${Singleton})