cmake_minimum_required(VERSION 3.27)
project(p37_euler)

set(CMAKE_CXX_STANDARD 20)

add_executable(p37_euler src/main.cpp)

find_package(GTest REQUIRED)

add_executable(p37_euler_test
        unit_tests/ATest.cpp)

target_link_libraries(p37_euler_test GTest::gtest GTest::gtest_main)






