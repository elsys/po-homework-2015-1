#include <stdio.h>

int main()
{
	int i=0;
	while(i<=255)
	{
		printf("\n%d - %c   %3d - %c   %3d - %c   %3d - %c   %3d - %c   ",i,i,1+i,1+i,2+i,2+i,3+i,3+i,4+i,4+i);
		i+=5;
	}
	return 0;
}