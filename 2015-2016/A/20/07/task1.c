#include <stdio.h>
#define MAX 8

int main()
{
	int a, b, count, input[MAX];


	scanf("%d", &a);

	if(a<0 || a>7)
	{
		return 0;
	}

	scanf("%d", &b);
	
	if(b<0 || b>200)
	{
		return 0;
	}


	for (int i = 0; i < MAX; ++i)
	{
		input[i] = 0;
	}


	for(count=MAX-1; count>=0; count--)
	{
		if(b>=1)
		{
			input[count] = b%2;
			b = b/2;
		}
		else
			break;
	}





	printf("\n");
	for (int i = 0; i < MAX; ++i)
	{
		printf("%d", input[i]);
	}
	printf("\n");
	printf("%d", input[7-a]);



	return 0;
}