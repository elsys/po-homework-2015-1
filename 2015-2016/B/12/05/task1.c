	#include <stdio.h>
	
	void rotr(int *a, int *b, int *c);
	
	int main() {
	
	int a, b, c, n, count;
	
	printf (" Enter the 1st Number: \n");
	scanf ("%d", &a);
	
	printf (" Enter the 2nd Number: \n");
	scanf ("%d", &b);
	
	printf (" Enter the 3rd Number: \n");
	scanf ("%d", &c);
	
	printf (" Times of Rotation: \n");
	scanf ("%d", &n);
	
	while (n > 3) n = n - 3;
	
	for (count = 0; count < n; count++) rotr(&a, &b, &c);
	printf (" %d %d %d ", a, b, c);
	
	return 0;
	
	}

	void rotr(int *a, int *b, int *c) {
	
	int helper;
	
	helper = *c;
	*c = *b;
	*b = *a;
	*a = helper;
	
	}
