#include <stdio.h>
#include<stdlib.h>

int compareDoubles(const void *a, const void *b) {
    return (*(double*)b > *(double*)a) - (*(double*)a > *(double*)b);
}

int main()
{
    long long int n, l;
    scanf("%lld %lld",&n,&l);

    int ar[n];
    for (long long int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] > ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    // printf("Sorted Input:\n");
    //     for(int i=0;i<n;i++)
    //     {
    //         printf("%d: %d\n",i+1,ar[i]);
    //     }
    //     printf("\n");

    if (ar[0] == 0 && ar[n-1]==l)
    {
        float a[n - 1];
        long long int c=0;
        for (int i = 0; i < n-1; i++)
        {
            a[c] = ((ar[i + 1] - (float)ar[i])/2);
            c++;
        }

        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n-1; j++)
            {
                if (a[i] < a[j])
                {
                    float t2 = a[i];
                    a[i] = a[j];
                    a[j] = t2;
                }
            }
        }

        printf("%f\n",a[0]);
        return 0;
    }

    else if (ar[0] != 0 && ar[n-1]==l)
    {
        float a[n];
        long long int c=0;
        for (int i = 0; i < n-1; i++)
        {
            a[c] = ((ar[i + 1] - (float)ar[i])/2);
            c++;
        }
        a[c] =(float) ar[0]-0;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] < a[j])
                {
                    float t2 = a[i];
                    a[i] = a[j];
                    a[j] = t2;
                }
            }
        }

        printf("%f\n",a[0]);
        return 0;
    }

    else if (ar[0] == 0 && ar[n-1]!=l)
    {
        double a[n];
        long long int c=0;
        for (int i = 0; i < n-1; i++)
        {
            a[c] = ((ar[i + 1] - (double)ar[i])/2);
            c++;
        }
        a[c] = l-(double)ar[n-1];

        qsort(a, n, sizeof(double), compareDoubles);

        printf("%lf\n",a[0]);
        return 0;
    }
    
    else if (ar[0] != 0 && ar[n-1]!=l)
    {
        double a[n+1];
        long long int c=0;
        for (int i = 0; i < n-1; i++)
        {
            a[c] = ((ar[i + 1] - (double)ar[i])/2);
            c++;
        }
        a[c] = l-ar[n-1];
        c++;
        a[c] = ar[0] - 0;

        qsort(a, n+1, sizeof(double), compareDoubles);

        printf("%lf\n",a[0]);
        return 0;
    }

    return 0;
}