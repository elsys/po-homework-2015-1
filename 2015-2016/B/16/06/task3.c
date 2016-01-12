#include <stdio.h>

int main() 
{
	int deers[200];
	int number, deer_num, count, count2, next = 0;
	
	scanf("%d", &number);
	for(count = 0; count < number; count++)
	{
		deers[count] = scanf("%d", &deer_num);
	}

	for(count = 0; count < number; count++) 
	{
		for(count2 = 0; count2 < number; count2++) 
		{
			if(deers[count] == deers[count2]) next++;
			
		}
		if(next == 1) {printf("%d \n\n", deers[count]); break;}
		else next = 0;
	}

	
	return 0;
}
