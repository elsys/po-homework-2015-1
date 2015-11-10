#include <stdio.h>
void rotr(int *a, int *b, int *c)
{
    int help = *c;
    *c = *b;
    *b = *a;
    *a = help;
}
int main()
{
    int num, a, b, c, count;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &num);

    for(count = 0; count < num%3; count++)
    {
        rotr(&a, &b, &c);
    }
    printf("%d", a);
    printf(" %d", b);
    printf(" %d", c);

    return 0;
}


