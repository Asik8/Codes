#include<stdio.h>
int main()
{
    char a[16];
    
    for(int i=0;i<4;i++)
    {
        scanf("%s",a[i]);
    }

    for(int i=0;i<4;i++)
    {
        printf("%s ",a[i]);
    }

    return 0;
}