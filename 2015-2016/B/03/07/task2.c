#include <stdio.h>
#include <stdlib.h>

int change_bit( int, int, int );

int main()
{
    int n, v, p;
    scanf("%d%d%d", &n, &v, &p);

    printf( "%d", change_bit ( n, v, p ) );
    return 0;
}

int change_bit ( int n, int v, int p ) {
    if( (n >> p & 1 ) != v ) n ^= 1 << p;
    return n;
}
