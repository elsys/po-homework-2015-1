#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, v, p, c, mask;

    scanf("%d", &n);
    scanf("%d", &v);
    scanf("%d", &p);
    if(v == 1)
    {
        mask = 1 << p;

        c = n | mask;

    }
    if(v == 0)
    {
        mask = ~(1 << p);

        c = n & mask;

    }

    printf("%d", c);
    return 0;
}

