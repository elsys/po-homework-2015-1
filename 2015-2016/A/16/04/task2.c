#include <stdio.h>
#include <stdlib.h>
void exact_square(void);

void main(void)
{
    exact_square();
}


void exact_square(void)
{
    int x;
    scanf("%d", &x);
    printf("\n");
    int n = 1;
    while(n<x)
    {
        if(x==n*n)
        {
            printf("1");
            return;
        }
        n++;
    }
    printf("0");
}
