#include<stdio.h>

int main()
{
    long long int a;
    scanf("%lld",&a);

    long long int ar[a];
    for(long long int i=0;i<a;i++)
    {
        scanf("%lld",&ar[i]);
    }

    for(long long int i=0;i<a;i++)
    {
        for(long long int j=i+1;j<a;j++)
        {
            if(ar[i]>ar[j])
            {
                long long int temp = ar[i];
                ar[i]= ar[j];
                ar[j]= temp;
            }
        }
    }

    for(long long int i=0;i<a;i++)
    {
        printf("%lld ",ar[i]);
    }

    long long int c=1;

     for(long long int i=0;i<a-1;i++)
    {
        if(ar[i]==ar[i+1] || ar[i]<ar[i+1])
        {
            c++;
        }
    }

    printf("\n%lld\n",c);

    return 0;
}