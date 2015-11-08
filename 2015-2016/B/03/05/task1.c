#include <stdio.h>
#include <stdlib.h>

void rotr ( int * , int * , int * );

int main() {
    int a, b, c, rotate_times;
    scanf( "%d %d %d %d" , &a , &b , &c , &rotate_times );
    for ( ; rotate_times > 0 ; rotate_times-- ) {
        rotr( &a , &b , &c );
    }
    printf("%d %d %d", a , b , c);
    return 0;
}

void rotr ( int *a , int *b , int *c ) {
    int swap_help;
    swap_help = *a;
    *a = *c;
    *c = *b;
    *b = swap_help;
}
