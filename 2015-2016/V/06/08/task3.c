#include<stdio.h>
#define max 200

int main() {
	int deer_count=0, deer_room_number[max];

	do {
		scanf("%d", &deer_count);
	} while( deer_count>200 && deer_count%2==0 && deer_count<=0 );
	
	int i;
	for ( i=0 ; i<deer_count ; i++ ) {
		scanf("\n %d", &deer_room_number[i] );
	}
	
	int rudolf = deer_room_number[0] ;	    
	for( i = 1; i < deer_count ; i++) {
		rudolf = rudolf ^ deer_room_number[i];
	}
	
	printf("%d", rudolf);
	return 0;
}
