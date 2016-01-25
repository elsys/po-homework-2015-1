#include <stdio.h>

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);
	
	b = (b >> a);
	
	if(b % 2 == 0)
		printf("0");
	else
		printf("1"); 

	return 0;
}
