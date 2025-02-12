#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    

    if (n % 2 == 0) {
        n++;
    }

    int nsp = n / 2;  
    int nst = 1;      

w
    for (int i = 0; i < (n + 1) / 2; i++) {
        for (int j = 0; j < nsp; j++) {
            printf(" ");
        }
        for (int k = 0; k < nst; k++) {
            printf("*");
        }
        printf("\n");
        nsp--;
        nst += 2;
    }

    nsp = 1;
    nst = n - 2;


    for (int i = 0; i < (n - 1) / 2; i++) {
        for (int j = 0; j < nsp; j++) {
            printf(" ");
        }
        for (int k = 0; k < nst; k++) {
            printf("*");
        }
        printf("\n");
        nsp++;
        nst -= 2;
    }

    return 0;
}
