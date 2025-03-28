project(tests)

find_package(GTest REQUIRED)

add_executable(tests tests.cpp)
target_link_libraries(tests PRIVATE GTest::GTest GTest::gtest_main arith)

include(GoogleTest)
gtest_discover_tests(tests)