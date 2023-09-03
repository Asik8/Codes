#include <stdio.h>
int main()
{
    int a[6] = {10, 4, 5, 6, 3, 7};
    int temp, swap, i, j;

    for (i = 0; i < 6; i++)
    {
        temp = a[i + 1];
        for (j = i; j >= 0; j--)
        {
            if (temp < a[j])
            {
                swap = a[j];
                a[j] = temp;;
                swap = a[i];
            }
        }
    }

    for (int l = 0; l < 6; l++)
    {
        printf("%d ", a[l]);
    }

    return 0;
}