#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        int a;
        scanf("%d",&a);
        int ar[a*2];
        for(int j=0;j<a*2;j++)
        {
            scanf("%d",&ar[j]);
        }

        int cont =0;

        for(int j=0;j<a*2;j+=2)
        {
            if((ar[j]+ar[j+1])%2==0)
            {
                cont++;
                break;
            }
        }

        if(cont>0)
        {
            printf("NO\n");
        }

        else
        {
            printf("YES\n");
        }
    }

    return 0;
}