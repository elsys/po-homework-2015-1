#include <stdio.h>
#define MAX 100

int main()
{
	int input[MAX], number, count, current_pos, roll, flag=0;


	scanf("%d", &number); //broi eleni

	if(number%2!=1)
	{
		return 0;
	}

	for(count=0; count<number; count++)
	{
		scanf("%d", &input[count]);
	}

	for(current_pos=0; current_pos<number; current_pos++)
	{

		flag = 0;
		for(roll=0; roll<number; roll++)
		{
			if(input[current_pos] == input[roll])
			{
				if(current_pos!=roll)
				{
					flag = 1;
				}
			}
		}

		if(flag == 0)
		{

			printf("%d \n", input[current_pos]);
			break;
		}
	}



	return 0;
}