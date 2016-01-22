#include <stdio.h>
#include <math.h>

int main()
{
	int bin[8];
	int n = 0;
	int v = 0;
	int p = 0;
	int counter = 0;
	int base = 1;
	int sum = 0;
	int help = 0;

	for(counter = 0; counter <= 8; counter++)
	{
		bin[counter] = 0;
	}

	scanf("%d", &n);
	scanf("%d", &v);
	scanf("%d", &p);

	for(counter = 0; n != 0; counter++)
	{
		if(n % 2 == 0)
		{
			bin[counter] = 0;
		}
		else bin[counter] = 1;

		n /= 2;
	}

	bin[p] = v;

	for(counter = 0; counter <= 8; counter++)
	{
		printf("%d ", bin[counter]);
	}		

	for(counter = 0; counter <= 8; counter++)
	{
		help = bin[counter];
		sum = sum + help*base;
		base = base * 2; 
	}
	printf("\n");

	printf("%d\n", sum);

	return 0;
}
