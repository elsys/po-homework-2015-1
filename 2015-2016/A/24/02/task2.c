#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define maxnum 1000
int main()
{
	int array[maxnum],input,  c, d, swap,n;
	c = d = swap = 0;

	for (c = 0; c < 1000;c++){
		scanf("%d", &input);
		if (input == 42)
			break;
		else
			array[c] = input;
	} 


	for (n = 0; n  < c - 1; n++)
	{
		for (d = 0; d < c - n - 1; d++)
		{
			if (array[d]>array[d + 1])
			{
				swap = array[d];
				array[d] = array[d + 1];
				array[d + 1] = swap;
			}

		}

	}

	for (d = 0; d < c; d++)
		printf("\n%d", array[d]);

	return 0;
}
