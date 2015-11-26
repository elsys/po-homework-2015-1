#include <stdio.h>

int main()
{
	int a[10];
	long long int x;
	for(x=0;x<10;x++)
		a[x]=0;
	printf("\nVavedi chislo:");
	scanf("%lli",&x);
	while(x!=0)
	{
		a[x%10]++;
		x/=10;
	}
	for(x=0;x<10;x++)
		printf("\nTsifrata %lli se povtaria %d pat(i).",x,a[x]);
	return 0;
}