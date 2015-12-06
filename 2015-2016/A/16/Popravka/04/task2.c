#include <stdio.h>
#include <stdlib.h>
void exact_square(void);

int main(void)
{
    exact_square();
    return 0;
}


void exact_square(void)
{
    int x;
    int n = 1;
    scanf("%d", &x);
    printf("\n");
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
