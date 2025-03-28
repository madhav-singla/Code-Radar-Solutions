#include <stdio.h>

int getNextPrimeDigit(int digit) {
    if (digit <= 1) return 2;
    if (digit == 2) return 3;
    if (digit == 4 || digit == 3) return 5;
    if (digit == 5 || digit == 6) return 7;
    return 2; 
}

int incrementToPrimeDigits(int N) {
    int result = 0, place = 1;

    while (N > 0) {
        int digit = N % 10; 
        int newDigit = getNextPrimeDigit(digit); 
        result = result + (newDigit * place); 
        place *= 10;
        N /= 10; 
    }

    return result;
}