// #include<stdio.h>

// int main()
// {
//     int a[5];

//     for (int i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     int in_count = 0;
//     int de_count = 0;

//     for (int i=0;i<5-1;i++)
//     {
//         if (a[i]>a[i+1])
//         {
//             de_count += 1;
//         }
//         else if (a[i]<a[i+1])
//         {
//             in_count += 1;
//         }
//     }

//     if (in_count == 4)
//     {
//         printf("C\n");
//     }
    
//     else if (de_count == 4)
//     {
//         printf("D\n");
//     }

//     else
//     {
//         printf("N\n");
//     }

// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
     int cards[5];
     for (int i = 0; i < 5; i++)
          cin >> cards[i];

     bool increase = false, decrease = false;
     for (int i = 0; i < 4; i++)
     
     {
          if (cards[i] < cards[i + 1])
               increase = true;
          if (cards[i] > cards[i + 1])
               decrease = true;
     }

     if (increase == true && decrease == false)
     {
          cout << "C" << endl;
     }
     else if (decrease == true && increase == false)
     {
          cout << "D" << endl;
     }
     else
     {
          cout << "N" << endl;
     }
     return 0;
}