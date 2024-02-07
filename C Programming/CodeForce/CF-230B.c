#include <stdio.h>
#include <math.h>

int main()
{
    long long int t;
    scanf("%lld",&t);
    long long int a[t];

    for (long long int j = 0; j < t; j++)
    {
        scanf("%lld",&a[j]);
        long long int s = sqrt(a[j]);
        long long int c=0,c2=0;
        if (s <= 1)
        {
            printf("NO\n");
            c++;
            c2++;
        }
        else
        {
            for (long long int i = 2; i <= sqrt(s); i++)
            {
                if (s % i == 0 && c==0 && c2==0)
                {
                    printf("NO\n");
                    c++;
                    c2++;
                }
            }
            if (s * s == a[j] && c==0)
            {
                printf("YES\n");
            }
            else if(c2==0)
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}