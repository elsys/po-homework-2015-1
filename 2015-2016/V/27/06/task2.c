#include <stdio.h>

int exact_square ( int );

int main()
{
	int num;

	printf( "Enter Number: " );
	scanf( "%d" , &num );

	printf( "%d" , exact_square(num) );

	return 0;
}

int exact_square ( int num )
{
	int res = 0 , mult;

	for ( mult = 1; res < num; mult ++ ){
		res = mult * mult;
		if ( res == num ){
			return 1;
		}
	}
	return 0;
}
