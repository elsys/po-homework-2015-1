#include <stdio.h>

void next_generation(int *number, int *lenght);

int main()
{
	int lenght, counter, number [20];
	
	
	
	scanf("%d", &lenght);
	if(lenght >= 0 && lenght <= 20)
		for( counter = 0; counter < lenght; counter++ )
			scanf( " %d", &number[ counter ] ); 
	next_generation( number, &lenght );
	
	return 0;
}

void next_generation(int *number, int *lenght )
{
	int counter = 0, number_zero = 2, previous [ 20 ], new_generation_number=0;
	
	printf("\n.");
	for( counter = 1; counter < *lenght ; counter++ )
	{
		if( number[ counter ] == 0 ) printf(".");

		if( number[ counter ] == 1 ) printf("*");
	}
	do 
	{	
		for( counter = 0; counter < *lenght ; counter++ )
			previous [ counter ] = number [ counter ]; 
		number_zero = 2;
		printf("\n.");
		for( counter = 1; counter < *lenght - 1; counter++ )
		{
			if ( ( previous [ counter - 1 ] == 0 && previous [ counter + 1 ] == 1 ) || ( previous [ counter - 1 ] == 1 && previous [ counter + 1 ] == 0 ) ) 
			{
				number[ counter ] = 1;
				printf("*");
			}
			else 
			{
				number[ counter ] = 0;
				number_zero++;
				printf(".");
			} 
		}
	new_generation_number++;
	printf(".");
	}while((number_zero < *lenght) || new_generation_number==1000);
}
