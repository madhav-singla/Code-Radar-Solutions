#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num & 1) // Check LSB using bitwise AND with 1
        printf("LSB of %d is SET (1)\n", num);
    else
        printf("LSB of %d is NOT SET (0)\n", num);

    return 0;
}
