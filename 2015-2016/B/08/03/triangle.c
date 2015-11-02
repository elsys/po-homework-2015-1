#include <stdio.h>
#define o (2*n - 1)


int main() 
{
	int r, n, i, p, s, g;

	scanf("%d", &n);
	p = 1;

	
	for(i = 0; i < n-p; i++) printf(" ");
	printf("*\n");

	s = 1;

	for(i = 2; i < n; i++)
	{
		r = 1;
		p++;

		for(g = 0; g < n-p; g++) printf(" ");
		printf("*");
		while(r <= s) {printf(" "); r++;}
		printf("*\n");

		s += 2;
	}

	if(i == n)
		for(i = 1; i <= o; i++) printf("*");
	printf("\n\n");

	return 0;

}