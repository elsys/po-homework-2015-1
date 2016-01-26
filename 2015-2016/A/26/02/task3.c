#include <stdio.h>
#include <stdlib.h>

int main()
{

	int num[1000], number, temp, counter, counter2, i=0;
	
	for(number=0; number<1000; number++)
		{
		scanf("%d", &temp);
	if(temp==42)
	{
	break;
	}
	num[number]=temp;
	i++;	
		}
	counter=0;
	while(counter<i)
	{	
		counter2=0;
		while(counter2<(number-counter))
		{
			if(num[counter2]>num[counter2+1])
			{
			temp=num[counter2];
			num[counter2]=num[counter2+1];
			num[counter2+1]=temp;
			}
			counter2++;
		}
	counter++;
	}

	for(counter=0; counter<=i; counter++)
	
	printf("%d\n", num[counter]);
	
	return 0;
}
