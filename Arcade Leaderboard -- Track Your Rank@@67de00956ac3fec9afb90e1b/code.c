#include <stdio.h>

void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    // Step 1: Create a list of unique scores
    int denseRank[200000]; // To store unique scores
    int uniqueCount = 0; // Count of unique scores
    
    denseRank[uniqueCount++] = ranked[0]; // First score always gets included

    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i - 1]) { // Skip duplicates
            denseRank[uniqueCount++] = ranked[i];
        }
    }

    // Step 2: Find player's rank efficiently
    int j = uniqueCount - 1; // Start from the lowest rank

    for (int i = 0; i < m; i++) {
        while (j >= 0 && player[i] >= denseRank[j]) { 
            j--; // Move up the ranks if player's score is higher
        }
        result[i] = j + 2; // Rank is (j+1), but since index starts at 0, add 1 more
    }
}