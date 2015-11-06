#include <stdio.h>
#include <stdlib.h>

int repeated = 0;

void next_generation( int* ,int*, int);

int main() {
    int current[21];
    int next[21];
    int lenght , lenght_helper , cell_current, i;
    for ( i = 0 ; i < 20 ; i++ ) {
        *( current + i ) = 0;
        *( next + i ) = 0;
    }
    do {
        scanf( "%d" , &lenght );
    } while( lenght > 20 || lenght < 0 );
    for ( lenght_helper = lenght , cell_current = 1 ; lenght_helper > 0 ; lenght_helper -- , cell_current ++ ) {
        scanf ( "%d" , &current[ cell_current ] );
    }
    next_generation( current , next , lenght );
    return 0;
}

void next_generation( int *current , int *next , int lenght ) {
    int i , alive = 0 ;
    for ( i = 0 ; i <= lenght ; i++ ) {
        if( *( current + i ) == 1 ) {
                alive++;
        }
    }
    for ( i = 1 ; i <= lenght ; i++ ) {
        if( *( current + i ) == 0 ) printf(" .");
        else printf(" *");
    }
    if( alive > 0 && repeated < 1000 ) {
        for ( i = 1 ; i <= lenght ; i++ ) {
            if ( *( current + i + 1 ) == *( current + i - 1 ) ) {
                *( next + i ) = 0;
            } else {
                *( next + i ) = 1;
            }
        }
        printf("\n");
        repeated ++;
        next_generation( next , current , lenght );
    }
}
