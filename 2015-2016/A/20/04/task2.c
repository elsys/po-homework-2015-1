#include <stdio.h>

int exact_square(int num)
{
	int count, temp;

	for(count = 1; count <= num/2; count++)
	{
		temp = num/count;

		if(temp == count)
		{
			printf("%d\n", temp);
			printf("%d = %d ^ 2\n", num, temp);
			return 0;
		}

	}

	printf("0\n");
	printf("%d is not a power of any number.\n", num);

	return 0;
}

int main()
{
	int num;

	scanf("%d", &num);

	exact_square(num);

	return 0;
}
