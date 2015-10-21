#include <stdio.h>

int main(){

	int n;
	int c=1;
	int k=0;
	
	printf("Enter number:");
	scanf("%d", &n);
	
	for (c = 1; c <= n; c++){
		printf(" ");
		for (k = 0; k!=2*c-1;k++)
			printf("*");

		printf("\n");
	}
	return 0;
}
