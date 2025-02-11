#include <stdio.h>
#include <math.h>
int main() {
    int a, b; 
    scanf("%d %d", &a, &b);

    if (a == (b*b)) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
