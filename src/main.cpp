
#include <iostream>
#include <vector>
#include <numeric>
#include "TruncatablePrime.h"

int main() {
    constexpr size_t N_primesToFind = 11;
    constexpr size_t upperBound = 1000000;
    std::vector<size_t> truncatablePrimes;
    TruncatablePrime truncatablePrime{upperBound};

    for(size_t i = 10; i < upperBound; ++i) {
        if(truncatablePrime.IsTruncatablePrime(i)) {
            truncatablePrimes.push_back(i);
        }
        if(truncatablePrimes.size() == N_primesToFind) break;
    }

    if(truncatablePrimes.size() != N_primesToFind) {
        std::cout << "Only found " << truncatablePrimes.size() << " truncatable primes. Increase upperBound.\n";
        return 1;
    }

    for(size_t i = 0; i < truncatablePrimes.size(); ++i) {
        std::cout << i << ": " << truncatablePrimes.at(i) << '\n';
    }


    std::cout << "The answer to problem 37 of project Euler is " <<  std::accumulate(truncatablePrimes.begin(), truncatablePrimes.end(), 0);

    return 0;
}
