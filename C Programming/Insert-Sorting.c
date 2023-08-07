#include<stdio.h>
int main()
{
    int a[5]={15,7,21,14,8},temp;

    for (int i=0;i<5;i++)
    {
        for (int j=i+1;j<5;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for (int k=0;k<5;k++)
    {
        printf("%d ",a[k]);
    }

    return 0;
}
