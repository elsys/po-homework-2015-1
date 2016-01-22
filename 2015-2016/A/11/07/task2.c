#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, v, p;
    
    do
    {
        scanf("%d", &n);
    }
    while(n < 0 || n > 200);

    do
    {
        scanf("%d", &v);
    }
    while(v!= 0 && v!= 1);

    do
    {
        scanf("%d", &p);
    }
    while(p < 0 || p > 7);

    n ^= (-v ^ n) & (1 << p);

    printf("%d", n);

    return 0;
}
