#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	int s;
	int n=1000;
	int index_max;
	int y;
	printf("n=");scanf("%d",&n);
	i=0;
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Vuvedi nomera na elementa a[%d]",i);
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		index_max=i;
		for(y=i+1;y<n;y++)
		{
			if(a[index_max]<a[y])
			{
				index_max=y;
			}
		}
		s=a[i];
		a[i]=a[index_max];
		a[index_max]=s;
	}
	for(i=0;i<n;i++)
	{
		printf("\nElementa s[%d] e raven na %d",i,a[i]);
	}
}
