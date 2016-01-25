#include <stdio.h>

int main()
{
    int n, v, p, bit;
    do
    {
        scanf("%d %d %d",&n, &v, &p);
    }while( ( p<0 || p>7 ) || ( v<0 || v>1 ) );

    if( ( n >> p ) != v )
    {
        bit = n ^ (1 << p);
    }
    printf("%d",bit);

    return 0;
}
