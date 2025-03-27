#include <stdio.h>

void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    
    int x[200000];
    int count = 0; 
    
    x[count++] = ranked[0];

    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i - 1]) { 
            x[count++] = ranked[i];
        }
    }

    int j = count - 1;

    for (int i = 0; i < m; i++) {
        while (j >= 0 && player[i] >= x[j]) { 
            j--;
        }
        result[i] = j + 2; 
        }
}