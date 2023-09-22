#include<stdio.h>
int main()
{
    int len;
    int list;
    scanf("%d",&len);
    int a[len];

    for(int l=0;l<len;l++)
    {
        scanf("%d",&a[l]);
    }

    for(int i=0; i<len;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(a[i]<a[j])
            {
                
            }
        }
    }

    return 0;
}