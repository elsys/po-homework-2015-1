#include <stdio.h>
#include <string.h>
#define digits 20
char number[digits];
int lenght;
int is_prime();
int check_type();
int convert();
int main()
{
	fgets ( number , digits , stdin );
	lenght = strlen(number) - 1;

	printf("%d", is_prime());

	return 0;
}
int is_prime()
{
	int converted, check, i, temp;

	temp = check_type();
	if ( temp == -1 ) return -1;
	else if ( temp == 0 ) return 0;
	else
	{
		converted = convert();
		check = 0;
		for ( i = 1; i <= converted ; i++ )
			if ( converted%i == 0 ) check++;

		if ( check == 2 ) return 1;
		else return 0;
	}
}
int check_type()
{
	int i;
	for ( i = 0 ; i < lenght ; i++ )
		if ( (number[i]<'0' || number[i]>'9') && number[0]!='-' ) return -1;

	if( number[0] == '-') return 0;
	else return 1;
}
int convert()
{
	int converted=0 , i;
	for ( i=0 ; i < lenght; i++ )
		converted = converted*10 + (number[i]-'0');

	return converted;
}
