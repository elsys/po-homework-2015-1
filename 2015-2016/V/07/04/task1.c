#include <stdio.h>

int main()
{
	int i,a[10];
	long long int n;
	for(i=0;i<10;i++)
		a[i]=0;
	printf("\nVavedi chislo:");
	scanf("%lli",&n);
	while(n!=0)
	{
		a[n%10]++;
		n/=10;
	}
	printf("\nTsifrite, koito se povtariat sa: ");
	for(i=0;i<10;i++)
		if(a[i]>1)
			printf("%d, ",i);
	printf("\b\b.");
	return 0;
}