#include <stdio.h>

int check(int *b, int x);

int main()
{
	int x,k;
	printf("Size of the square:");
	scanf("%d",&x);
	int i, sq[x][x];
	for(i = 0;i < x; i++)
    {
		for(k = 0; k < x; k++)
		{
			printf("Enter the num for coordinates x[%d][%d]\n", i+1, k+1);
			scanf("%d",&sq[i][k]);
		}
	}
	int *pt = &sq[0][0];
	int result = check(pt,x);
	if(result)
	{
		printf("No it isnt.\n");
	}else
	{
		printf("Yes it is.\n");
	}
	return 0;
}

int check(int *b , int x){
	int sum = 0,c_sum,k,i;
	int *pointer =  b;
	for(i = 0; i < x ; i++)
    {
		sum = sum + *(pointer + i);
	}
	c_sum=0;
	for(i=0;i<x;i++)
	{
		for(k = 0; k < x; k++)
		{
			c_sum=c_sum+*(pointer+k+(i * x));
		}
		if(c_sum!=sum)
		{
			return 1;
		}
		c_sum = 0;
	}
	c_sum=0;
	for(i=0;i<x;i++)
	{
		for(k = 0; k < x; k++){
			c_sum = c_sum + *(pointer + i + (k * x));
		}
		if(c_sum != sum){
			return 1;
		}
		c_sum = 0;
	}
	c_sum = 0;
	for(i = 0;i < x;i++)
	{
		c_sum = c_sum + *(pointer + (i*(x + 1)));
	}
	if(c_sum != sum)
		return 1;
	c_sum = 0;
	for(i = 0; i < x;i++)
	{
		c_sum = c_sum + *(pointer + 2+(i *(x - 1)));
	}
	if(c_sum != sum)
		return 1;
	return 0;
}
