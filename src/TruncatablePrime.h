//
// Created by kischy on 4/21/24.
//

#ifndef P37_EULER_TRUNCATABLEPRIME_H
#define P37_EULER_TRUNCATABLEPRIME_H


#include <cstdio>
#include "PrimeSieve.h"

class TruncatablePrime {
public:
    TruncatablePrime(const size_t upperBound);
    bool IsTruncatablePrime(const size_t number);

private:
    const size_t mUpperBound;
    PrimeSieve mPrimeSieve;

};


#endif //P37_EULER_TRUNCATABLEPRIME_H
