add_executable(Visitor src/main.cpp src/Expression.cpp src/Visitors.cpp)

target_include_directories(Visitor PRIVATE inc/)
