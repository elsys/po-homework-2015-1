#include <stdio.h>

#define MAX_DEER_COUNT 200

int get_rudolph_number(int barn[]);
int array_value_count(int , int array[]);

int main()
{
	int barn[MAX_DEER_COUNT]={0};
	int deer_count;
	int counter = 0;
	int rudolph_index;

	scanf("%d",&deer_count);
	if(deer_count > 200)
	{
		printf("deer count can't be more than 200\n");
		return -1;
	}
	else if(!(deer_count % 2))
	{
		printf("deer count must be odd\n");
	}

	for(; counter < deer_count; counter++)
	{
		int current_deer;
		scanf("%d",&current_deer);
		if(current_deer < 1 || current_deer > 100)
		{
			printf("Invalid deer number\n");
		}
		barn[counter] = current_deer;
	}

	rudolph_index = get_rudolph_number(barn);

	printf("%d", rudolph_index);

	return 0;
}

int get_rudolph_number(int barn[])
{
	int counter = 0;
	while(barn[counter] > 0)
	{
		int count = array_value_count(barn[counter],barn);

		if(count == 1)
		{
			return barn[counter];
		}
		
		counter++;
	}

	return -1;
}

int array_value_count(int number, int array[])
{
	int count = 0;
	int counter = 0;
	while(array[counter] > 0)
	{
		if(array[counter] == number)
		{
			count++;
		}

		counter++;
	}

	return count;
}
