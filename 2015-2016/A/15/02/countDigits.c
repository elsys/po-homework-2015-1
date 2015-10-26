#include <stdio.h>	//Prochita chislo ot standartniq vhod i izvejda na ekrana za vsqka cifra ot chisloto, po kolko puti se povtarq.

void main() 
{
	int n, digits[10] = {0}, i;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	while(n!=0)
	{
		digits[n%10]++;
		n/=10;
	}
	
	for(i=0; i<10; i++)
	{
		if(digits[i]!=0)
			printf("The digit %d is encountered %d time(s)\n", i, digits[i]);
	}
	
}
