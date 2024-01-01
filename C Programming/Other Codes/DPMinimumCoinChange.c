#include <stdio.h>
#include <limits.h>

#define MAX_SIZE 1000

int dp[MAX_SIZE][MAX_SIZE];

int main() {

    for (int i = 0; i < MAX_SIZE; i++)
        for (int j = 0; j < MAX_SIZE; j++)
            dp[i][j] = INT_MAX - 1;

    int n;
    scanf("%d", &n);

    int coins[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &coins[i]);

    int amount;
    scanf("%d", &amount);

    for (int i = 0; i <= n; i++)
        dp[i][0] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= amount; j++) {
            if (coins[i - 1] > j) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = (dp[i - 1][j] < 1 + dp[i][j - coins[i - 1]]) ? dp[i - 1][j] : 1 + dp[i][j - coins[i - 1]];
            }
        }
    }

    printf("Minimum number of coins: %d\n", dp[n][amount]);

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= amount; j++) {
            printf("%d ", dp[i][j]);
        }
        printf("\n");
    }

    return 0;
}
