#include <stdio.h>

int main()
{
    int n, m;

    scanf("%d", &n);


    for (int i = 1; i <= 10; i++) {

        printf("%d X %d = %d " , n , i , n * i);
    }

    return 0;
}