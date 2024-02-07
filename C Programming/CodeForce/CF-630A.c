#include<stdio.h>
#include<math.h>

int main()
{
    long long int a;
    scanf("%lld",&a);

    long long int ans =1;
    for(long long int i=0;i<a;i++)
    {
        ans=ans*5;
    }
    ans=ans%100;
    printf("%lld\n",ans);

    return 0;
}
