#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <deque>
#include "PrimeSieve.h"
using namespace testing;


namespace test {

    class PrimeSieveTest : public Test {
    public:
        PrimeSieve primeSieve{972};

    };
    TEST_F(PrimeSieveTest,PrimeCases) {
        std::deque<uint64_t> primes{2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, 97, 971, 197, 719, 41};
        for (const auto prime: primes) {
            EXPECT_THAT(primeSieve.IsPrime(prime), Eq(true));
        }
    }

    TEST_F(PrimeSieveTest,NonPrimeCases) {
        std::deque<uint64_t> primes{0,100,6,1,33};
        for(const auto prime : primes) {
            EXPECT_THAT(primeSieve.IsPrime(prime), Eq(false));
        }
    }

}