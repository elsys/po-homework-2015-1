#include <stdio.h>

int main ()
{
	int a, b, temp=0;
	scanf("%d",&a);
	scanf("%d",&b);
	temp=(b>>a);
	printf("%d\n", temp%2);
	return 0;
}