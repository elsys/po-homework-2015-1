#include <stdio.h>
#include <stdlib.h>

int is_prime( int );

int main()
{
    int number;
    scanf ( "%d" , &number );
    printf( "%d" , is_prime( number ) );
    return 0;
}

int is_prime( int number ) {
    int divisor, count = 0;
    if ( number < 0 ) {
        return -1;
    }
    for ( divisor = 1 ; divisor <= number ; divisor++ ) {
        if ( number % divisor == 0 ) {
            count ++;
        }
    }
    if( count == 2 ) return 1;
    else return 0;
}
