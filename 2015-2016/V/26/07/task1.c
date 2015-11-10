#include <stdio.h>

void rotr (int *a, int *b, int *c)
{
    int k = *a;
    *a = *c;
    *c = *b;
    *b = k;
}

int main()
{
    int a, b, c, times, i = 0;
    scanf ("%d", &a);
    scanf ("%d", &b);
    scanf ("%d", &c);
    scanf ("%d", &times);
    do
    {
        rotr (&a, &b, &c);
        i++;
    }while (i<times);
    printf ("\n%d %d %d", a, b, c);
    return 0;
}
