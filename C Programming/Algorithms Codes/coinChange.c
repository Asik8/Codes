#include <stdio.h>
int main()
{
    int n, t, sum = 0, i, j, k;
    printf("Enter the Number of Index and Target Value:\n");
    scanf("%d %d", &n, &t);
    printf("Enter the Array:\n");
    int arr[n];

    for (k = 0; k < n; k++)
    {
        scanf("%d", &arr[k]);
    }

    for (i = n - 1; i >= 0; i--)
    {
        int div = t / arr[i];
        t=t%arr[i];
        sum+=div;
    }

    printf("Number of Coins is: %d",sum);

    return 0;
}