#include <stdio.h>
#include <stdlib.h>

int repeated = 0;

void next_generation( int* ,int*, int);

int main() {
    int current[21];
    int next[21];
    int num_cells , num_cells_helper , cell_current, i;
    for ( i = 0 ; i < 20 ; i++ ) {
        *( current + i ) = 0;
        *( next + i ) = 0;
    }
    do {
        scanf( "%d" , &num_cells );
    } while( num_cells > 20 || num_cells < 0 );
    for ( num_cells_helper = num_cells , cell_current = 1 ; num_cells_helper > 0 ; num_cells_helper -- , cell_current ++ ) {
        scanf ( "%d" , &current[ cell_current ] );
    }
    next_generation( &current , &next , num_cells );
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
