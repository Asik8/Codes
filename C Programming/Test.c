#include <stdio.h>
#include<stdlib.h>
int main()
{
  int a[] = {10, 22, 9, 33, 21, 50, 41, 60};
  int n = sizeof(a) / sizeof(a[0]);

  int *lis, max = 0;
  lis = (int *)malloc(n * sizeof(int));

  for (int l = 0; l < n; l++)
  {
    lis[l] = 1;
  }

  for (int i = 1; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if (a[i] > a[j] && lis[i] < lis[j] + 1)
      {
        lis[i] = lis[j] + 1;
      }
    }
  }

  for (int k = 0; k < n; k++)
  {
    if (max < lis[k])
    {
      max = lis[k];
    }
  }

  free(lis);

  printf("Size: %d\n", max);
  return 0;
}