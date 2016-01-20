#include <stdio.h>
#include <stdlib.h>

int find_bit ( int, int );

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);

    printf("%d", find_bit( a , b ) );
    return 0;
}

int find_bit( int a, int b ) {
    if( ( b >> a & 1 ) == 1 ) return 1;
    else return 0;
}
