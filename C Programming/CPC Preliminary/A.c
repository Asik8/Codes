#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int c = 0,left=0, c2 = 0,right=0,fi=0;
        int a, k;
        scanf("%d %d",&a,&k);
        int ar[a];

        for (int m = 0; m < a; m++)
        {
            scanf("%d",&ar[m]);
        }

        for (int j = 0; j < a; j++)
        {
            if (ar[j] == k)
            {
                for (int m = 0; m < j; m++)
                {
                    int div = ar[m] / 2;
                    for (int l = 2; l <= div; l++)
                    {
                        if (ar[m] % l == 0 || ar[m] % l != 0)
                        {
                            c++;
                        }
                    }
                    if (c > 0)
                    {
                        left++;
                    }
                }

                for (int m = j + 1; m < a; m++)
                {
                    int div = ar[m] / 2;
                    for (int l = 2; l <= div; l++)
                    {
                        if (ar[m] % l == 0 || ar[m] % l != 0)
                        {
                            c2++;
                        }
                    }
                    if (c2 > 0)
                    {
                        right++;
                    }
                }

                if(left>right)
                {
                    fi=left;
                }
                else
                {
                    fi=right;
                }
                break;
            }
        }

        printf("Case %d: %d\n", i + 1, fi);
    }

    return 0;
}