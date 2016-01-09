#include<stdio.h>
#include <stdlib.h>

int find_rudolf ( int *, int );

int main () {
	int deer [100] , deer_num, count;
	do {
		printf("Deer num: \n");scanf("%d", &deer_num);
	} while ( deer_num % 2 == 0 );
	
	for ( count = 0; count < deer_num ; count ++ ) {
		scanf("%d", &deer[ count ]);
	}
	printf( "%d" , find_rudolf ( deer, deer_num ) );

return 0;
}

int find_rudolf ( int * deer, int deer_num ) {
	int curr_ind, compare, not_rudolf=0;
	for ( curr_ind = 1; curr_ind < deer_num ; curr_ind ++ ) {
		for( compare = 0; compare < deer_num; compare ++) {
			if ( deer [ curr_ind ] == deer [ compare ] ) {
				if ( curr_ind != compare ) not_rudolf++;		
			}
		}	
		if( not_rudolf == 0 ) return deer[ curr_ind ];
		else not_rudolf = 0;
	} 
	return 0;
}
