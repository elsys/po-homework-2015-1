#include <stdio.h>
#include <string.h>

int is_prime(char* input_numb)
{
	int  lenght,numb=0, counter;


	lenght = strlen( input_numb );
   	for ( counter = 0; counter < lenght; counter++)
        	if ( input_numb[ counter ] >= '0' && input_numb[ counter ] <= '9') numb = numb + input_numb[ counter ] ;



	if ( numb < 1 ) return -1;
	else
	{
		for ( counter = numb - 1; counter > 3; counter-- )
		{
			if( numb % counter == 0 ) return 0;
		}
	}

	return 1;
}



int main()
{
	char number[50];



	scanf ( "%s", number );
	printf( "%d", is_prime(number) );



	return 0;
}
