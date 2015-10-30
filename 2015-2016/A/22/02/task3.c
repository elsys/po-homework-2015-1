#include <stdio.h>
#include <string.h>
int main()
{
	int i=0, n=0, p=0;
	int a[1000];
	printf("Choose when to stop(Insert 1 or 2):\n");
	printf("1.When enter number 42!\n");
	printf("2.When you want!\n");
	scanf("%d",&n);
	if (n==1)
	{
		do
		{
			printf("Insert %d number:",i+1);
			scanf("%d",&a[i]);
			i++;
		}while(a[i-1]!=42);
	}
	if(n==2)
	{
		i=0;
		n=0;
		printf("Insert number of numbers:");
		scanf("%d",&n);
		do
		{
			printf("Insert %d number:",i+1);
			scanf("%d",&a[i]);
			i++;

		}while(i!=n);
	}
	n=0;
	while(1)
	{
		p=0;
		for(n=0; n<i-1; n++)
		{
			if(a[n]>a[n+1])
			{
				a[n]=a[n]+a[n+1];
				a[n+1]=a[n]-a[n+1];
				a[n]=a[n]-a[n+1];
				p=1;
			}
		}
		if(p==0)
		{
			break;
		}
	}
	n=0;
	do
	{
		printf("%d ",a[n]);
		n++;
	}while(n!=i);
	printf("\n");
}
