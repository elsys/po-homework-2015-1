#include <stdio.h>

void next_generation(int *current, int *next, int length);
int is_anyone_alive(int *x, int length);
void print_cells(int *y, int length);

int main()
{
	int n,i,a[20],b[20];
	char rm_new_line;
	do
	{
		scanf("%d",&n);
	}
	while(n<0 || n>20);
	do
	{
		for(i=0;i<n;i++)
		{
			scanf("%c",&rm_new_line);
			scanf("%d",&a[i]);
		}
	}
	while(a[0]!=0 || a[n-1]!=0);
	print_cells(&a[0], n);
	for(i=0;i<=1000;i++)
	{
		if(i%2==0)
		{
			next_generation(&a[0], &b[0], n);
			print_cells(&b[0], n);
			if(is_anyone_alive(&b[0], n)==0)
				return 0;
		}	
		else
		{
			next_generation(&b[0], &a[0], n);
			print_cells(&a[0], n);
			if(is_anyone_alive(&a[0], n)==0)
				return 0;
		}
	}
	return 1;
}

void next_generation(int *current, int *next, int length)
{
	int j=1;
	*next=0;
	*(next+length-1)=0;
	while(j<length-1)
	{
		if((*(current+j-1)!=0 && *(current+j+1)==0) || (*(current+j-1)==0 && *(current+j+1)!=0))
			*(next+j)=1;
		else
			*(next+j)=0;
		j++;
	}
}

int is_anyone_alive(int *x, int length)
{
	int j=0;
	while(j<length)
	{
		if(*(x+j)!=0)
			return 1;
		j++;
	}
	return 0;
}

void print_cells(int *y, int length)
{
	int j=0;
	printf("\n");
	while(j<length)
	{
		if(*(y+j)==0)
			printf(".");
		else
			printf("*");
		j++;
	}
}