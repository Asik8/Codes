#include<stdio.h>

int fun (int n)
{
    if(n==0)
    {
        return 1;
    }

    else 
    {
        return 3 + fun(n-1);
    }
}

int main()
{
    int a=10;
    printf("%d",fun(a));
    return 0;
}