/*#include<stdio.h>
int main()
{
    int a,b=0;
    scanf("%d",&a);

    while(a!=0)
    {
        int rem=a%10;
        printf("%d\n",rem);
        b=b*10+rem;
        printf("%d\n",b);
        a=a/10;
        printf("%d\n",a);
        printf("\n");
    }
    if(a==b)
    {
         printf("Palindrome");

    }


    else
    {
        printf("Hello World");
    }


    return 0;
}*/

#include <stdio.h>

int main() {
    int a, b = 0;
    scanf("%d", &a);

    int original_a = a;
     printf("%d\n",original_a);
    while (a != 0) {
        int rem = a % 10;
         printf("%d\n",rem);
        b = b * 10 + rem;
         printf("%d\n",b);
        a = a / 10;
         printf("%d\n",a);
          printf("\n");
    }

    if (original_a == b) {
        printf("Palindrome");
    } else {
        printf("Not a Palindrome");
    }

    return 0;
}
