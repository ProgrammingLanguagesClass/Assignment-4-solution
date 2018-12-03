#include "main.h"
#include "../problem-1/main.h"

int multiply(const int x[], const int y[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result += x[i] * y[i];
    }
    return result;
}

int *multiply(int x[], int *y[], int n) {
    int *result = new int[n];
    int **t = transpose(y, n);
    for (int i = 0; i < n; i++) {
        result[i] = multiply(x, t[i], n);
    }
    return result;
}