#include <stdio.h>

void rotr(int *a, int *b, int *c);

int main()
{
	
	int x=0, y=0, z=0;
	int n=0, i=0, j=0;
	
	printf("Type first number: ");
	scanf("%d",&x);
	
	printf("Type second number: ");
	scanf("%d",&y);

	printf("Type third number: ");
	scanf("%d",&z);
		
	printf("How much times to execute function: ");
	scanf("%d",&n);
	j=n-1;

	for(i=0; i<=j; i++)
	{
		rotr(&x, &y, &z);	
		if(i==j)
		{
			printf("%d",x);
			printf("%d",y);
			printf("%d\n",z);
		}
	}
	return 0;	
}

void rotr(int *a, int *b, int *c)
{
	int save1, save2;

	save1= *a;
	save2= *b;
	*a= *c;
	*b=save1;
	*c=save2;
	
}
