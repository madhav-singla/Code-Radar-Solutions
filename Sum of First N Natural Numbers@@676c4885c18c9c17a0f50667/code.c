#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter the number of rows>>>");
    scanf("%d", &n);
    printf("Enter the number of columns>>>");
    scanf("%d", &m);
int sum = 0;
    for (int i = 1; i <= n; i++) {
sum += i;
        printf("%d " , sum);
    }

    return 0;
}