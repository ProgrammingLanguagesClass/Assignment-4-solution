#include "main.h"

int **multiplyMatrices(int **x, int **y, int n, int m) {
    int **result = new int *[n];
    for (int i = 0; i < n; i++) {
        result[i] = new int[m];
        for (int j = 0; j < m; j++) {
            result[i][j] = 0;
            for (int k = 0; k < m; k++) {
                result[i][j] += x[i][k] * y[k][j];
            }
        }
    }
    return result;
}