#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);  // Read two integers

    if (a == b) {
        printf("True\n");  // Print "True" if a is greater than b
    } else {
        printf("False\n");  // Print "False" if a is not greater than b (semicolon added)
    }

    return 0;
}
