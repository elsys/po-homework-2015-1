#include <stdio.h>


int main()
{
	int a = 0, b = 0;
	int bin[8];
	int counter = 0;	

	for (counter = 0; counter < 8; counter++)
	{
		bin[counter] = 0;
	}

	scanf("%d", &a);
	scanf("%d", &b);
	
	for(counter = 0; b != 0; counter++)
	{
		if(b % 2 == 0)
		{
			bin[counter] = 0;
		}
		else bin[counter] = 1;
		
		b /= 2;
	}
	
	printf("%d\n", bin[a]);

	return 0;
}
