#include <stdio.h>
#define MAX_REINDEER 200
int main()
{
	int barn[MAX_REINDEER];
	for(int i=0;i<200;i++) barn[i]=0;

	int reindeer,number;
	scanf("%d",&reindeer);
	for(int i=0;i<reindeer;i++)
	{
		scanf("%d",&number);
		for(int j=0;j<reindeer;j++)
		{
			if(number==barn[j]) 
			{
				barn[j]=0;
				break;			
			}		
			if(j==reindeer-1) barn[i]=number;
		}
	}

	for(int i=0;i<reindeer;i++)
		if(barn[i]!=0) printf("%d",barn[i]);
	return 0;
}
