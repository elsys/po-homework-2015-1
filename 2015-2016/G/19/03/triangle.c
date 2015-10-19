#include <stdio.h>
#include <string.h>

void main ()
{
    int n;
    scanf("%d", &n);
    int i;
    int k;
    for(i = 0; i <= n; i++)
    {
        for(k = 0; k < n - i; k++)
        {
            printf(" ");
        }

        for(k = 0; k < 2*i - 1;k++)
        {
            printf("*");
        }
        printf("\n");

    }
}
