#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double num;
    scanf("%f",&num);
    printf("You entered: %.4f",num );
    return 0;
}