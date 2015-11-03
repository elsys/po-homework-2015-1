#include <stdio.h>
int exact_square(int);
int main()
{
	int number;
	scanf("%d", &number);
	printf("%d", exact_square(number));
	return 0;
}
int exact_square(int number)
{
	int root=number;
	if(number>1)
		while( root*root > number ) root--;
	if( root*root == number ) return 1;
	else return 0;
}
