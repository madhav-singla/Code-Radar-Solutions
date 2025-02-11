#include <stdio.h>

int main() {
    int a ,b;
    scanf("%d ", &a , &b);
    if (a==b) {
        printf("Equal");
    } else if(a>b){
            printf("First");
        }else{
            printf("Secound");
        }

    return 0;
}
