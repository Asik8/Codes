#include <stdio.h>

int main()
{
    long long int n, l;
    scanf("%lld %lld", &n, &l);

    long long int ar[n];
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }

    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (ar[i] > ar[j])
    //         {
    //             int temp = ar[i];
    //             ar[i] = ar[j];
    //             ar[j] = temp;
    //         }
    //     }
    // }
	float max_value = ar[0];
    for (int i = 1; i < n - 1; i++)
    {
        if (ar[i] > max_value)
		{
			max_value = ar[i];
		}
    }
	float s_max_value = ar[0];
    for (int i = 1; i < n - 1; i++)
    {
        if (ar[i] > s_max_value && ar[i]<max_value)
		{
			s_max_value = ar[i];
		}
    }

    float max_distance = 0;

    float first_dis = abs(0-ar[0]);
    if (first_dis > max_distance)
        {
            max_distance = first_dis;
        }
    float last_dis = abs(l-ar[n-1]);
    if (last_dis > max_distance)
        {
            max_distance = last_dis;
        }

    for (int i = 0; i < n - 1; i++)
    {
        float dis = abs(ar[i] - ar[i + 1]);
        float div = dis / 2;
        if (div > max_distance)
        {
            max_distance = div;
        }
    }

    printf("%f\n", max_distance);
    return 0;
}