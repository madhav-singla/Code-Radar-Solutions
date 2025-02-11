#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a , b ,c;
    scanf("%d" , &a);
    scanf("%d" , &b);
    scanf("%d" , &c);
    if(a>b && a>c){
        if(b>c){
            printf("%d" , b);
        }else{
            printf("%d" , c)
        }
    }else{
        printf("%d" , a);
    }
    return 0;
}