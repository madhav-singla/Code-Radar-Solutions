#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a ,b ,c;
    scanf("%d %d %d" , &a,&b,&c);
    int d = (a+b+c)/3;
    printf("%d", d);
    return 0;
}