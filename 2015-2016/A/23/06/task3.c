#include<stdio.h>
#include<stdlib.h>

int main()
{
	int dears[200],count,number,br,i;
	scanf("%d",&number);
	while(number%2==0)
	{
		scanf("%d",&number);
	}
	for(count=0;count<number;count++)
	{
		scanf("%d",&dears[count]);
		br=0;
		for(i=0;i<count;i++)
		{
			if(dears[i]==dears[count])
			{
				br++;
			}
		}
		if(br>1)
		{
			count--;
		}
        }
	for(count=0;count<number;count++)
	{
		br=0;
		for(i=0;i<number;i++)
		{
			if(dears[i]==dears[count])
			{
				br++;
			}
		}
		if(br==1)
		{
			printf("%d",dears[count]);
		}
	}
	return 0;
}
