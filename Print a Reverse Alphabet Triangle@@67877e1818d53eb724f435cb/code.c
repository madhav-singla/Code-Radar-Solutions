#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int a = 65;
        for (int j = 1; j <= n - i + 1; j++) {
            printf("%c " , a);
            a++;
        }
        printf("\n");
    }

    return 0;
}