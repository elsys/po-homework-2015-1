#include <stdio.h>
void create_letter_distribution_diagram();
int main()
{
	create_letter_distribution_diagram();
	return 0;
}
void create_letter_distribution_diagram()
{
	char alphabet[30], c;
	int counter[30], i, j, max = 0;
	for( c = 'a', i = 0 ; c <= 'z' ; c++, i++ )
	{
		alphabet[i] = c;
		counter[i] = 0;
	}
	while(1)
	{
		c = getchar();
		if(c == EOF) break;
		for( j = 0 ; j < 26 ; j++ )
			if( c==alphabet[j] || c==alphabet[j]-('a'-'A') )
			{ 
				counter[j]++;
				if( counter[j] > max ) max = counter[j];
			}
	}
	for ( j = max ; j >=0 ; j-- )
		for( i = 0 ; i < 26 ; i++)
			if( counter[i] == j )
				printf("%c: %d\n", alphabet[i], j);
}
