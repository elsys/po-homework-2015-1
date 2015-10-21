#include <stdio.h> 	//izkarva na ekrana vsichki znaci ot ASCII tablicata i sreshtu tqh koda na suotvetniq znak

void main()
{
	int i;
	for(i=0; i<255; i++)
	{
	printf("%c -> %d\n", i, i+1);
	}
}
