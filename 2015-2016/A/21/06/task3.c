#include <stdio.h>

int main()
{
	int deers;
	int number[160];
	
	scanf("%d", &deers);
	
	if(deers % 2 == 0)
	{
		return 0;
	}
	
	for(int i = 0; i < deers; i++)
	{
		scanf("%d", &number[i]);
	}
	
	for(int i = 0; i < deers; i++)
	{
		for(int j = i + 1; j <= deers; j++)
		{
			if(number[i] == number[j])
			{
				number[i] = -1;
				number[j] = -1;
				break;
			}
		}
	}
	
	for(int i = 0; i < deers; i++)
	{
		if(number[i] != -1)
		{
			printf("%d\n", number[i]);
			
			return 0;
		}
	}
	
	return 0;
}
