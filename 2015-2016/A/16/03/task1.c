#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, n, z, k = 0;
    scanf("%d",&z);

    for(i = 1;i <= z;++i)
    {
        for(n = 1;n<=z-i;++n)
        {
           printf("  ");
        }
        while(k != 2*i-1)
        {
           printf("* ");
           ++k;
        }
        k = 0;
        printf("\n");
    }
    return 0;
}
