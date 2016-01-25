#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number,bit,pos;
	scanf("%d",&number);
	scanf("%d",&bit);
	scanf("%d",&pos);

	if(bit==1)
	{
		printf("%d",number | (1<<pos));
	}
	if(bit==0)
	{
		printf("%d",number ^ (1<<pos));
	}
	return 0;
}
