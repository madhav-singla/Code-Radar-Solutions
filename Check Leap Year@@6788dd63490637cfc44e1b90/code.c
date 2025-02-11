#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);

    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
        printf("Leap Year\n");
    } else {
        printf("Not a Leap Year\n");
    }
    
    return 0;
}
