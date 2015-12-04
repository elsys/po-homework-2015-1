#include <stdio.h>

void rotr ( int num, int *a, int *b, int *c);
int main()
{
    int num, a, b, c ;

    scanf ("%d", &a ) ;
    scanf ("%d", &b ) ;
    scanf ("%d", &c ) ;
    scanf ("%d", &num ) ;

    rotr ( num, &a, &b, &c ) ;

    printf ( "%d", a ) ;
    printf ( "%d", b ) ;
    printf ( "%d", c ) ;

    return 0;
}
void rotr ( int num, int *a, int *b, int *c )
{
    int swap ;

    for (; num > 0 ; num -- )
    {
        swap = *b ;
        *b = *a ;
        *a = *c ;
        *c = swap ;
    }
}
