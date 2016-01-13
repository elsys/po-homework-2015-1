#include <stdio.h>

int main()
{	
	int raindeers, i, a, j; 
	int num[200];

	printf("Incert the number of the raindeers.\n");
	scanf("%d",&raindeers);
	while(raindeers % 2 == 0){
		printf("Incert correct number of raindeers.\n");
		scanf("%d",&raindeers);
	}
	for (i = 0; i < raindeers; ++i)
	{
		scanf("%d",&num[i]);
	}
	
	for (i = 0; i < raindeers; ++i)
	{
		for (j = 0; j < raindeers; ++j)
		{
			if(num[i] == num[j]){
				a = 1;
			}
			else{
				a = 0;
			}
		}
		if(a == 0){
			printf("%d\n", num[i]);
			break;
		}
	}

	return 0;
}

