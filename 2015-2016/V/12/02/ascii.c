#include <stdio.h>

int main()
{
	int a = 0;
	int b;

	do{
		printf("How much elements you want:");
		scanf("%d", &b);
	}while(a > b);

	while (a <= b){
		printf("\n%c -- %d",a,a);
		a++;
	}
	printf("\n");
	return 0;
}
