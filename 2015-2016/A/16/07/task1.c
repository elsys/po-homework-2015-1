#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    int c[100];
    int counter = 0;
    int temp;
    scanf("%d", &a);
    scanf("%d", &b);
    while(b > 0)
    {
        temp = b % 2;
        c[counter] = temp;
        b = b / 2;
        counter++;
    }
    if(counter<a)
    {
        return 0;
    }
    printf("\n");
    while(counter>=0)
    {
        if(counter==a)
        {
            printf("\n%d", c[counter]);
            return 0;
        }
        counter--;
    }
    return 0;
}
