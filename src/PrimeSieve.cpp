
#include "PrimeSieve.h"


PrimeSieve::PrimeSieve(size_t upperBound) : mUpperBound(upperBound) {
    CalculatePrimes();
}

bool PrimeSieve::IsPrime(const size_t number) const {
    return mPrimes.at(number);
}

void PrimeSieve::CalculatePrimes() {
    mPrimes.resize(mUpperBound,true);
    mPrimes.at(0) = false;
    mPrimes.at(1) = false;

    for(size_t possPrime = 0; possPrime < mPrimes.size(); ++possPrime) {
        if(!mPrimes.at(possPrime)) continue;

        uint64_t multiplicator = 2;
        auto num = multiplicator * possPrime;
        while(num < mPrimes.size()) {
            mPrimes.at(num) = false;
            multiplicator++;
            num = multiplicator * possPrime;
        }
    }
}

