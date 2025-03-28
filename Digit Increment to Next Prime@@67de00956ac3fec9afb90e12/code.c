#include <stdio.h>

int getNextPrimeDigit(int digit) {
    // Mapping digits to the next prime number (2, 3, 5, 7)
    int primeMap[] = {2, 2, 3, 3, 5, 5, 7, 7, 2, 2};
    return primeMap[digit];
}

int incrementToPrimeDigits(int N) {
    int result = 0, place = 1;

    while (N > 0) {
        int digit = N % 10;  // Extract the last digit
        int newDigit = getNextPrimeDigit(digit); // Get the next prime digit
        result = result + (newDigit * place); // Construct the new number
        place *= 10;
        N /= 10; // Remove the last digit
    }
    
    return result;
}