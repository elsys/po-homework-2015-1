#include <stdio.h>

int main()
{	
	int a, b, i, helper[32];
	scanf("%d", &a);
	scanf("%d", &b);

	for(i = 1; i > 0;){
		if(a < 0 || a > 7)
		{
			printf("enter a valid a\n");
			scanf("%d", &a);
		}
	}
	for(i = 1; i > 0;){
		if(b < 0 || b > 200)
		{
			printf("enter a valid b\n");
			scanf("%d", &b);
		}
	}

	for(i = 32; i != 0 ; i--)
	{
		helper[i] = b % 2;
		b /= 2;
	}

	printf("%d\n", helper[a]);

	return 0;
}

