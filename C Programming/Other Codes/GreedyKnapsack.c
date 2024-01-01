// Greedy Knapsack or Fractional Knapsack

#include <stdio.h>
#include <stdlib.h>

// Structure for an item which stores profit and corresponding weight of item
struct item {
    int profit, weight;
};

// Comparison function to sort item according to profit/weight ratio
int cmp(const void* a, const void* b) {
    double r1 = (double)((struct item*)a)->profit / (double)((struct item*)a)->weight;
    double r2 = (double)((struct item*)b)->profit / (double)((struct item*)b)->weight;
    return (r1 < r2) ? 1 : -1;
}

// Driver code
int main() {
    int W = 50;
    struct item arr[] = { {60, 10}, {100, 20}, {120, 30} };
    int N = sizeof(arr) / sizeof(arr[0]);
    
    qsort(arr, N, sizeof(struct item), cmp);

    double finalvalue = 0.0;

    // Looping through all items
    for (int i = 0; i < N; i++) {
        // If adding item won't overflow, add it completely
        if (arr[i].weight <= W) {
            W -= arr[i].weight;
            finalvalue += arr[i].profit;
        } else { // If we can't add the current item, add fractional part of it
            finalvalue += arr[i].profit * ((double)W / (double)arr[i].weight);
            break;
        }
    }

    // Function call
    printf("%lf\n", finalvalue);
    return 0;
}
