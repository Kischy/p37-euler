#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <deque>
#include "TruncatablePrime.h"

using namespace testing;


namespace test {

    class TruncatablePrimeTest : public Test {
    public:
        TruncatablePrime trunctablePrime{4000};

    };
    TEST_F(TruncatablePrimeTest,TruncatablePrimeCase) {
        EXPECT_THAT(trunctablePrime.IsTruncatablePrime(3797), Eq(true));
    }

    TEST_F(TruncatablePrimeTest,NonTruncatablePrimeCases) {
        std::deque<uint64_t> primes{0,100,6,1,33,2,3,5,7};
        for(const auto prime : primes) {
            EXPECT_THAT(trunctablePrime.IsTruncatablePrime(prime), Eq(false));
        }
    }

}