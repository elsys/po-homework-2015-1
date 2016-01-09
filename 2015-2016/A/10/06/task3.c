#include<stdio.h>
#include<stdlib.h>
int main()
{
	int deers,deers_array[200],i=0,j=0,y=0;;
	do{	
	scanf("%d",&deers);	
	}while(deers%2 == 0);
	while(i<deers)
	{
		do{
			do{
			scanf("%d",&deers_array[i]);
			}while(deers_array[i]<1 && deers_array[i]>100);
			j=0;
			y=0;
			while(j<i)
			{
				if(deers_array[i]==deers_array[j])
				{
					y++;
				}
				j++;
			}
		}while(y>1);
		i++;
	}
	i=0;
	while(i<deers)
	{
		j=0;
		y=0;
		while(j<deers)
		{
			if(deers_array[i]==deers_array[j])
			{
				y++;
			}
			j++;
		}
		if(y==1)
		{
			printf("\n%d",deers_array[i]);
		}
		i++;
	}	
}
