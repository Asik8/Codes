#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int countDistinctPrimeFactors(int num) {
    int count = 0;
    for (int i = 2; i <= num; i++) {
        if (isPrime(i) && num % i == 0) {
            count++;
            while (num % i == 0) {
                num /= i;
            }
        }
    }
    return count;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n, k;
        scanf("%d %d", &n, &k);
        int arr[n];

        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }

        int maxLength = 0;
        int left = 0, right = 0;
        int distinctPrimeCount = 0;

        while (right < n) {
            if (isPrime(arr[right])) {
                if (countDistinctPrimeFactors(arr[right]) == k) {
                    distinctPrimeCount++;
                }
            }

            while (distinctPrimeCount > k) {
                if (isPrime(arr[left]) && countDistinctPrimeFactors(arr[left]) == k) {
                    distinctPrimeCount--;
                }
                left++;
            }

            maxLength = (right - left + 1 > maxLength) ? right - left + 1 : maxLength;
            right++;
        }

        printf("Case %d: %d\n", i + 1, maxLength-1);
    }

    return 0;
}
