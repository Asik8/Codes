#include<stdio.h>

int main()
{
    long long int t;
    scanf("%lld",&t);

        int ar[6];
    for(long long int i=0;i<t;i++)
    {
        for(int j=0;j<6;j++)
        {
            scanf("%d",&ar[j]);
        }

        int s1 = ar[0]+ar[1]+ar[2];
        int s2 = ar[3]+ar[4]+ar[5];

        if(s1==s2)
        {
            printf("YES\n");
        }

        else{
             printf("NO\n");
        }

    }

    return 0;
}