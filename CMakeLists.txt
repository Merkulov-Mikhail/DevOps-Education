cmake_minimum_required(VERSION 3.10)

project(Some_strange_arithmetic_operands)

include_directories(include)

add_library(arith STATIC src/arith.cpp)


enable_testing()
find_package(GTest REQUIRED)
add_executable(tests tests/tests.cpp)
target_link_libraries(tests PRIVATE arith GTest::GTest GTest::Main)
add_test(NAME several_functions COMMAND tests)