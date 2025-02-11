#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float radius;
    scanf("%f" , &radius);
    float area = 3.14 * radius;
    printf("Area: %0.2f", area);
    return 0;
}