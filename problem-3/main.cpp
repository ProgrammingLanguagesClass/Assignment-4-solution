#include "main.h"
#include "../problem-2/main.h"

int **multiply(int **x, int **y, int n, int m) {
    int **result = new int *[n];
    for (int i = 0; i < n; i++) {
        result[i] = multiply(x[i], y, m);
    }
    return result;
}