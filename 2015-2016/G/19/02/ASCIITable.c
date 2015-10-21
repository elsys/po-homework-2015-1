#include <stdio.h>

void main ()
{
    int i;
    printf("*************\n");

    for(i = 0; i <= 255; i++)
    {
        printf("* %-3d -> %-3c*\n", i, i);
    }

    printf("*************");
}
