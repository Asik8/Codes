
#include <stdio.h>
#include <limits.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int coinChange(int denominations[], int numCoins, int targetAmount) {
    int dp[targetAmount + 1];
    dp[0] = 0;

    for (int i = 1; i <= targetAmount; i++) {
        dp[i] = INT_MAX;
        for (int j = 0; j < numCoins; j++) {
            if (i >= denominations[j]) {
                dp[i] = min(dp[i], dp[i - denominations[j]] + 1);
            }
        }
    }

    return dp[targetAmount];
}

int main() {
    int denominations[] = {1, 5, 10};
    int numCoins = sizeof(denominations) / sizeof(denominations[0]);
    int targetAmount = 12;

    int minCoins = coinChange(denominations, numCoins, targetAmount);
    printf("Minimum Coins: %d\n", minCoins);

    return 0;
}
