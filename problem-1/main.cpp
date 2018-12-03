#include "main.h"

int **transpose(int **y, int n) {
    int **result = new int *[n];
    for (int i = 0; i < n; i++) {
        result[i] = new int[n];
        for (int j = 0; j < n; j++) {
            result[i][j] = y[j][i];
        }
    }
    return result;
}