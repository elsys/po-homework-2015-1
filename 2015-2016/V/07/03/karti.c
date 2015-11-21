#include <stdio.h>
#include <string.h>

int main()
{
	int a[13],i,sort=0,n=13,b;
	char x;
	printf("\nVavedi razbarkano teste:");
	for(i=0;i<13;i++)
	{
		x=getchar();
		if(x<='9' && x>'1')
			a[i]=(int)x-48;
		else
			switch(x)
			{
				case 'T': a[i]=10; break;
				case 'J': a[i]=11; break;
				case 'Q': a[i]=12; break;
				case 'K': a[i]=13; break;
				case 'A': a[i]=14; break;
			}
	}
	while(!sort)
	{
		sort=1;
		for(i=0;i<n;i++)
			if(a[i]>a[i+1])
			{
				sort=0;
				b=a[i];
				a[i]=a[i+1];
				a[i+1]=b;
			}
		n--;
	}
	for(i=0;i<13;i++)
	{
		if(a[i]>=2 && a[i]<=10)
			printf("%d ",a[i]);
		else
			switch(a[i])
			{
				case 11: printf("J "); break;
				case 12: printf("Q "); break;
				case 13: printf("K "); break;
				case 14: printf("A "); break;
			}
	}
	printf("\n");
	return 0;
}