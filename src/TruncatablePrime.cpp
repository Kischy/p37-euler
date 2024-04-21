//
// Created by kischy on 4/21/24.
//

#include "TruncatablePrime.h"
#include "Digits.h"

TruncatablePrime::TruncatablePrime(const size_t upperBound) : mUpperBound(upperBound), mPrimeSieve(mUpperBound) {
}

bool TruncatablePrime::IsTruncatablePrime(const size_t number) {
    if(number < 10) return false;

    if(!mPrimeSieve.IsPrime(number)) return false;

    size_t currNum = Digits::RemoveLastDigit(number);

    while(currNum > 0) {
        if(!mPrimeSieve.IsPrime(currNum)) return false;
        currNum = Digits::RemoveLastDigit(currNum);
    }

    currNum = Digits::RemoveFirstDigit(number);
    while(currNum > 0) {
        if(!mPrimeSieve.IsPrime(currNum)) return false;
        currNum = Digits::RemoveFirstDigit(currNum);
    }

    return true;
}
