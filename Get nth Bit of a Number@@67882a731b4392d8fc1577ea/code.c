#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);

    int bit = (num & (1 << n)) ? 1 : 0;

    printf("%d\n", bit);
    return 0;
}
