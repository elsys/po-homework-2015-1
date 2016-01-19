#include <stdio.h>
#include <stdlib.h>

int change_bit( int, int, int );

int main()
{
    int n, v, p;
    scanf("%d", &n);
    do {
        scanf("%d", &v);
    } while ( v < 0 || v > 1);
    do {
        scanf("%d", &p);
    } while ( p < 0 || p > 7);
    printf( "%d", change_bit ( n, v, p ) );
    return 0;
}

int change_bit ( int n, int v, int p ) {
    if( (n >> p & 1 ) != v ) n ^= 1 << p;
    return n;
}
