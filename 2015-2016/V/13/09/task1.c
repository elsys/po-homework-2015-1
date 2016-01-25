#include <stdio.h>

int main()
{
    int a, b, bit;
    do
    {
        scanf("%d %d",&a, &b);
    }while( ( a<0 || a>7 ) || ( b<0 || b>200 ) );

    bit = (b >> a) & 1;

    printf("%d",bit);

    return 0;
}
