#include <stdio.h>

int main()
{
	int n, i, j, k;
	scanf("%d", &n);

	for (i = 1, j = 1; i <= n; i++, j+=2)
	{
		k = ((2 * n - 1) - j) / 2;
		while (k > 0)
		{
			printf(" ");
			k--;
		}
		k = j;
		while (k > 0)
		{
			printf("#");
			k--;
		}
		printf("\n");
	}
	return 0;
}
