#include <stdio.h>

void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    
    int denseRank[200000];
    int uniqueCount = 0; 
    
    denseRank[uniqueCount++] = ranked[0];

    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i - 1]) { 
            denseRank[uniqueCount++] = ranked[i];
        }
    }

    int j = uniqueCount - 1;

    for (int i = 0; i < m; i++) {
        while (j >= 0 && player[i] >= denseRank[j]) { 
            j--;
        }
        result[i] = j + 2; 
        }
}