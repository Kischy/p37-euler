//
// Created by kischy on 4/21/24.
//

#include "Digits.h"

size_t Digits::RemoveFirstDigit(const size_t number) {
    if(number < 10) return 0;
    return RemoveFirstDigit(number / 10) * 10 + number % 10;
}

size_t Digits::RemoveLastDigit(const size_t number) {
    if(number < 10) return 0;
    return number / 10;
}
