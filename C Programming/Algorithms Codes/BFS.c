#include <stdio.h>
int main()
{
    int ar[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (ar[1][2])
            {
                ar[i][j] = 1;
            }

            else if (ar[2][1])
            {
                ar[i][j] = 1;
            }

            else if (ar[1][2])
            {
                ar[i][j] = 1;
            }

            else
            {
                ar[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
}