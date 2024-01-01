#include<stdio.h>
int main()
{
    string a;
    int l,c=0;
    scanf("%s",a);

    l=strlen(a);

    for(i=0;i<l,i++)
    {
        if (a[i]!=a[l-i-1])
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("Palindrome");

    }
    else
        printf("Not Palindrome");

    return 0;
}

