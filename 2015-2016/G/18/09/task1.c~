#include <stdio.h>

int main()
{
    int a, b, count, count2;
    int bit[50];
    int real_bit[50];

    while(a > 7 || a < 0)
    {
        scanf("%d", &a);
    }

    while(b > 200 || b < 0)
    {
        scanf("%d", &b);
    }

    for(count = 0; b > 0; count++)
    {
        bit[count] = b % 2;
        b = b / 2;
    }

    for(count2 = 0; count >= 0; count2++)
    {
        real_bit[count2] = bit[count];
        count--;
    }

    printf("%d \n", real_bit[a]);
    return 0;
}
