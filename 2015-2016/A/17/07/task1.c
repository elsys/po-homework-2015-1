#include <stdio.h>

int main()
{
    int a;
    int b;
    int i;
    int k[8];
    int reverse;

    for(i = 0; i < 8; i++)
    {
        k[i] = 0;
    }
    scanf("%d",&a);
    scanf("%d",&b);

    for(reverse = 7; b != 0; reverse--)
    {
        k[reverse] = b % 2;
        b = b / 2;
    }
    printf("%d",k[7-a]);
    return 0;
}
