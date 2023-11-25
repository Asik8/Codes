#include <stdio.h>
#include <stdlib.h>

int compareDecreasing(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int weight[] = {2, 5, 4, 7, 1, 3, 8};
    int c = 10;
    int n = sizeof(weight) / sizeof(weight[0]);
    
    qsort(weight, n, sizeof(int), compareDecreasing);
    
    int res = 0;
    int bin_rem[n];

    // Place items one by one
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < res; j++) {
            if (bin_rem[j] >= weight[i]) {
                bin_rem[j] = bin_rem[j] - weight[i];
                break;
            }
        }

        if (j == res) {
            bin_rem[res] = c - weight[i];
            res++;
        }
    }

    printf("Number of bins required in First Fit Decreasing: %d\n", res);

    return 0;
}
