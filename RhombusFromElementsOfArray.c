#include <stdio.h>

int main()
{

    int i = 0;
    scanf("%d", &i);
    int data[i][i] = {0};
    for (int n = 0; n < i/2 + 1; n++)
    {
        for(int k = 0;k<(i/2-n);k++)
        printf(" ");
        for (int k = 0;k<1+2*n ;k++)
        printf("%d", data[n][k]);
        for(int k = i/2 + 1 + n; k<i ; k++ )
        printf(" ");
        printf("\n");
    }

    for(int n = i/2 + 1 ;n < i ; n++)
    {

        for(int k = 0;k <n - i/2;k++)
        printf(" ");

        for (int k = 0;k <i - 2*(n - i/2);k++)
        printf("%d", data[n][k]);

        for(int k = 0; k < n - i/2; k++)
        printf(" ");

        printf("\n");

    }
    return 0;
}