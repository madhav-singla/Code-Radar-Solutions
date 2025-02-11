#include <stdio.h>

int main() {
    int num;
    
    scanf("%d", &num);

    if (num & 1) // Check LSB using bitwise AND with 1
        printf("Set");
    else
        printf("Not Set");

    return 0;
}
