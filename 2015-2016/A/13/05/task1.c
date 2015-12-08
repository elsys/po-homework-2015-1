#include <stdio.h>
#include <stdlib.h>

void rotr(int *a, int *b, int *c);

int main()
{
    int n, a, b, c, i;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        rotr(&a, &b, &c);
    }

    printf("%d %d %d", a, b, c);
    return 0;
}

void rotr(int *a, int *b, int *c)
{
    int temp;
    temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}

