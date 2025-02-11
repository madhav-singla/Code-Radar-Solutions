#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a ,b ,c;
    scanf("%d %d %d" , &a,&b,&c);
    int d = (a+b+c)/3;
    printf("Average: %.2f", d);
    return 0;
}