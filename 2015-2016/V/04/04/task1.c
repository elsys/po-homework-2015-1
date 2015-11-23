#include<stdio.h>

int main(){

	int num, i=0, k, temp;

	printf("Num=");
	scanf("%d", &num);
	
	for(i=0; i<10; i++)
	{
		k=0;
		temp=num;
		while(temp!=0)
		{
			if(temp%10==i)
				k++;
			temp=temp/10;
		}
		if(k>1)
			printf("The Number %d is met %d times\n", i, k);
	}
	return 0;
}
