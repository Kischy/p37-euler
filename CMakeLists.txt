cmake_minimum_required(VERSION 3.27)
project(p37_euler)

set(CMAKE_CXX_STANDARD 20)

add_executable(p37_euler
        src/main.cpp
        src/PrimeSieve.cpp
        src/PrimeSieve.h
        src/Digits.cpp
        src/Digits.h
        src/TruncatablePrime.cpp
        src/TruncatablePrime.h
)

find_package(GTest REQUIRED)
add_executable(p37_euler_test
        unit_tests/PrimeSieveTest.cpp
        src/PrimeSieve.cpp
        src/PrimeSieve.h
        src/Digits.cpp
        src/Digits.h
        unit_tests/DigitsTest.cpp
        src/TruncatablePrime.cpp
        src/TruncatablePrime.h
        unit_tests/TruncatablePrimeTest.cpp
)
target_include_directories(p37_euler_test PRIVATE src)
target_link_libraries(p37_euler_test PRIVATE GTest::gtest GTest::gmock GTest::gmock_main)






