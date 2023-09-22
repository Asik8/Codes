#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int sequence(int a[], int n) {
    

    return cont;
}

int main() {
    int len;
    scanf("%d",&len);
    int ar[len];

    for(int m=0;m<len;m++)
    {
        scanf("%d",&ar[m]);
    }

    int new[len]; 
    int cont = 0;

    for (int i = 0; i < len; i++) {
        new[i] = 1;

        for (int j = 0; j < i; j++) {
            if (new[i] > new[j]) {
                new[i] = max(new[i], new[j] + 1);
            }
        }

        cont = max(cont, new[i]);
    }

    printf("LIS is: %d\n", length);

    return 0;
}
