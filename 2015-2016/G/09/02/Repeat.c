#include<stdio.h>
#include<stdlib.h>
int main()
{
	char arr[20];
	int modnum;
	int number;
	int i = 0, counter = 1,j,k;
	printf("Input the number :");
	scanf("%d", &number);
	while(number > 0)
	{
		modnum = number % 10;
		arr[i] = modnum;
		printf("%d\n", arr[i]);
		number /= 10;
		i++;

	}
	for (j = 0; j < i ; j++)
	{

		if(arr[j] == 'c')
			continue;
      		for(k = 0; k < i; k++)
		{
			if(j != k){
			if(arr[j] == arr[k])
				{
					counter++;
					arr[k] = 'c';
				}
			}
		}
		printf("%d - %d\n", arr[j], counter);
		counter = 1;
	}
}
