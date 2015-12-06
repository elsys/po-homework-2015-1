#include <stdio.h>
#include <stdlib.h>
void rotr(int *a, int *b, int *c);

int main(void)
{
    int a, b, c, n;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &n);
    while(n!=0)
    {
        rotr(&a, &b, &c);
        n--;
    }
    printf("%d ", a);
    printf("%d ", b);
    printf("%d ", c);
    return 0;
}

void rotr(int *a, int *b, int *c)
{
    int swap;
    swap = *b;
    *b = *a;
    *a = *c;
    *c = swap;
}
