#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i = 7;
    int remain[8] = { 0 };

    do{
        scanf("%d", &a);
    }while(a < 0 || a > 7);
    do{
        scanf("%d", &b);
    }while(b < 0 || b > 200);

    while(b > 0)
    {
        remain[i] = b % 2;
        i--;
        b = b/2;
    }

    printf("%d", remain[7-a]);

    return 0;
}
