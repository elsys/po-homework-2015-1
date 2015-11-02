#include <stdio.h>

int is_prime( int );

int main()
{
	int num;

	printf( "Enter Number: " );
	scanf( "%d", &num );

	printf( "%d", is_prime(num) );

	return 0;
}

int is_prime( int num )
{
	if( num<1 ){
		return -1;
	}

	int i;

	for( i = 2; i < num; i++ ){
		if( num % i == 0){
			if( num == 2 ){
				return 1;
			}
			else{
				return 0;
			}
		}
	}
	return 1;
}
