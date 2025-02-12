#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int total_rows = 2 * N - 1;  

    for (int i = 1; i <= total_rows; i++) {
        int spaces, stars;
        
        if (i <= N) {
            spaces = N - i;
            stars = 2 * i - 1;
        } else {
            // Lower half
            spaces = i - N;
            stars = 2 * (total_rows - i + 1) - 1;
        }

        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
