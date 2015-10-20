#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i[50];
    int number, h, w, d, p;

    printf ("Enter number:\n");
    scanf("%d", &number);

    for(h=0; number>=1; h++)
    {
        i[h] = number % 10;
        number = number / 10;
    }
    for(d=0; d<10; d++)
    {
        p = 0;
        w = h;

    while(w >= 0)
    {
        if(d == i[w])
        p++;

        w--;
    }

    if(p != 0 && p > 1)
        printf("%d\n", d);

    }
 }
