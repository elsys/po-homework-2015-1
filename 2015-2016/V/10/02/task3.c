#include<stdio.h>
int main()
{
	int array[1000];
	int i=0;
	for(; i <1000; i++)
	{
		scanf("%d",&array[i]);
		if(array[i] == 42)
		{
			break;
		}
	}
		int lenght = i;
		for(i=0;i<lenght;i++)
		{
			int j=0;
			for(; j<lenght-1; j++)
			{
				if(array[j] > array[j+1])
				{
					int b=array[j];
					array[j]=array[j+1];
					array[j+1]=b;
				}		
			}
		}
	for(i=0;i<lenght;i++)
	{
		printf("\n%d",array[i]);
	}
return 0;
}
				
