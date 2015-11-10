#include <stdio.h>

int is_prime(int numb)
{
	int counter, true_false=0;


	
	for ( counter = numb - 1; counter > 2; counter-- )
		if( numb % counter == 0 ) true_false++;
	if(numb < 1) return -1;
	else if(true_false > 0) return 0;
	else return 1;
}


int main()
{
	int number;



	scanf ( "%d", &number );
	printf( "%d", is_prime(number) );



	return 0;
}
