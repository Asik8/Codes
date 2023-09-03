#include <stdio.h>
#include <string.h>

int max(int n, int m)
{
    if(n>m)
    {
        return n;
    }
    else 
    {
        return m;
    }
}

int main()
{
    char str1[] = "ABCBDAB";
    char str2[] = "BDCABA";

    int l1 =strlen(str1);
    int l2 =strlen(str2);

    int arr[l1 + 1][l2 + 1];

    for (int i = 0; i <= l1; i++)
    {
        for (int j = 0; j <= l2; j++)
        {
            if (i == 0 || j == 0)
            {
                arr[i][j] = 0;
            }

            else if (str1[i - 1] == str2[j - 1])
            {
                arr[i][j] = arr[i - 1][j - 1] + 1;
            }

            else
            {
                arr[i][j] = max(arr[i][j-1],arr[i-1][j]);
            }
        }
    }

    printf("%d",arr[l1][l2]);

    return 0;
}