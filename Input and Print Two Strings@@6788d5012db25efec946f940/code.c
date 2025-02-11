#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);  // No & needed because 'str' is already an address
    printf("%s\n", str);
    return 0;
}
