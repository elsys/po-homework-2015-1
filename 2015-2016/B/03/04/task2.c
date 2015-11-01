#include <stdio.h>
#include <stdlib.h>


int exact_square( int );

int main()
{
    int number;
    scanf( "%d" , &number );
    printf("%d", exact_square( number ) );
    return 0;
}


int exact_square( int number ) {
    int divisor, no_exact_square = 1;
    for( divisor = 0; divisor <= number/2 ; divisor++ ) {
        if ( divisor * divisor == number ) {
            no_exact_square = 0;
            break;
        } else {
            no_exact_square = 1;
        }
    }
    if ( no_exact_square == 1 ) return 0;
    else return 1;
}
