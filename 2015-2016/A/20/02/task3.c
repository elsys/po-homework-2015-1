#include <stdio.h>
#define MAX 1000


int main()
{
	int mass[MAX], count=0, i, temp;

	for(; count < MAX; ++count)
	{
		scanf("%d", &mass[count]);

		if(mass[count] == 42)
		{
			count--;
			break;
		}
	}

	

		for(i=0; i<count-1; ++i)
		{
			if(mass[i]	> mass[i+1])
			{
				temp = mass[i];
            	mass[i] = mass[i + 1];
            	mass[i + 1] = temp;
			}
		} 

		


	for(i = 0; i < count; ++i)
	{
		printf("%d \n", mass[i]);
	}

	return 0;
}