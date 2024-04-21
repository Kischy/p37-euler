

#ifndef P37_EULER_PRIMESIEVE_H
#define P37_EULER_PRIMESIEVE_H


#include <cstdint>
#include <deque>
#include <cstdio>

class PrimeSieve {
public:
    PrimeSieve(size_t upperBound);

    bool IsPrime(const size_t number) const;

private:
    const size_t mUpperBound;
    std::deque<bool> mPrimes;

    void CalculatePrimes();

};


#endif //P37_EULER_PRIMESIEVE_H
