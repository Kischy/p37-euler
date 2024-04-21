#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Digits.h"
using namespace testing;


namespace test {

    TEST(DigitsTest, RemoveFirstDigit) {
        EXPECT_THAT(Digits::RemoveFirstDigit(379715), Eq(79715));
        EXPECT_THAT(Digits::RemoveFirstDigit(79715), Eq(9715));
        EXPECT_THAT(Digits::RemoveFirstDigit(9715), Eq(715));
        EXPECT_THAT(Digits::RemoveFirstDigit(715), Eq(15));
        EXPECT_THAT(Digits::RemoveFirstDigit(15), Eq(5));
        EXPECT_THAT(Digits::RemoveFirstDigit(5), Eq(0));
        EXPECT_THAT(Digits::RemoveFirstDigit(0), Eq(0));
    }


    TEST(DigitsTest, RemoveLastDigit) {
        EXPECT_THAT(Digits::RemoveLastDigit(379715), Eq(37971));
        EXPECT_THAT(Digits::RemoveLastDigit(37971), Eq(3797));
        EXPECT_THAT(Digits::RemoveLastDigit(3797), Eq(379));
        EXPECT_THAT(Digits::RemoveLastDigit(379), Eq(37));
        EXPECT_THAT(Digits::RemoveLastDigit(37), Eq(3));
        EXPECT_THAT(Digits::RemoveLastDigit(3), Eq(0));
        EXPECT_THAT(Digits::RemoveLastDigit(0), Eq(0));
    }



}