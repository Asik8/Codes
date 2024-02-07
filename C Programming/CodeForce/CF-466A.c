#include<stdio.h>

int main()
{
    int n,m,a,b;
    scanf("%d %d %d %d",&n,&m,&a,&b);

    int fsol = a*n;

    int div = n/m;
    n=n%m;
    int ssol = (div*b)+(n*a);

    if(fsol<ssol)
    {
        printf("%d\n",fsol);
    }
    else
        printf("%d\n",ssol);

    return 0;
}