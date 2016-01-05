#include <stdio.h>

int main()
{
	int i, a[10];
	long int n;
	for(i = 0; i < 10; i++)
		a[i] = 0;
	scanf("%li", &n);
	while(n != 0)
	{
		a[n%10]++;
		n /= 10;
	}
	for(i = 0; i < 10; i++)
		if(a[i] > 1)
			printf("%d ",i);
	return 0;
}
