#include <stdio.h>

#define MAX_SIZE 1000

long long dp[MAX_SIZE][MAX_SIZE] = {0};

int main() {
    int n;
    scanf("%d", &n);

    int coins[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &coins[i]);

    int amount;
    scanf("%d", &amount);

    for (int i = 0; i <= n; i++) {
        dp[i][0] = 1; 
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= amount; j++) {
            if (coins[i - 1] > j) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = dp[i - 1][j] + dp[i][j - coins[i - 1]];
            }
        }
    }

    printf("Minimum number of ways: %lld\n", dp[n][amount]);

    return 0;
}
