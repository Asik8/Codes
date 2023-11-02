// LDS Code:

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[] = {5, 7, 2, 9, 8, 1, 6, 10};
    int n = sizeof(a) / sizeof(a[0]);

    int *lds, max = 0;
    lds = (int *)malloc(n * sizeof(int));

    for (int l = 0; l < n; l++)
    {
        lds[l] = 1;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] < a[j] && lds[i] < lds[j] + 1)
            {
                lds[i] = lds[j] + 1;
            }
        }
    }

    for (int k = 0; k < n; k++)
    {
        if (max < lds[k])
        {
            max = lds[k];
        }
    }

    free(lds);

    printf("LDS: %d\n", max);
    return 0;
}