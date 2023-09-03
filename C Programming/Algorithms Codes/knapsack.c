#include <stdio.h>

int max(int n, int m) {
    return (n > m) ? n : m;
}

int knapsack(int capacity, int weights[], int values[], int c) {
    int arr[c + 1][capacity + 1];

    for (int i = 0; i <= c; i++) {
        for (int j = 0; j <= capacity; j++) {
            if (i == 0 || j == 0)
                arr[i][j] = 0;
            else if (weights[i - 1] <= j)
                arr[i][j] = max(values[i - 1] + arr[i - 1][j - weights[i - 1]], arr[i - 1][j]);
            else
                arr[i][j] = arr[i - 1][j];
        }
    }

    return arr[c][capacity];
}

int main() {
    int values[] = {60, 100, 120};
    int weights[] = {10, 20, 30};
    int capacity = 50;
    int d = sizeof(values) / sizeof(values[0]);

    int max = knapsack(capacity, weights, values, d);
    
    printf("Maximum value in knapsack = %d\n", max);
    
    return 0;
}