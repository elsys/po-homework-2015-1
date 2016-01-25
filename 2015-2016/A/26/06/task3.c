#include <stdio.h>

int main()
{
	int deer[200], num, counter, temp, counter2;
	
	scanf("%d", &num);
	
	while(num%2==0)
	{
	scanf("%d", &num);
	}
	counter=0;
	while(counter<num)
	{
		scanf("%d", &deer[counter]);
		temp=0;	
	for(counter2=0; counter2<counter; counter2++)
	{
		if(deer[counter2]==deer[counter])
		{
		temp++;
		}
	}
	if(temp>1)
	{
	counter--;
	}
	counter++;
	}
	counter=0;
	while(counter<num)
	{
		temp=0;
		counter2=0;
		while(counter2<num)
		{
			if(deer[counter2]==deer[counter])
			{
			temp++;
			}
			counter2++;
		}
			if(temp==1)
			{
			printf("%d\n", deer[counter]);
			}
			counter++;
	}
	return 0;
}
