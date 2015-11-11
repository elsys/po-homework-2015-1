#include <stdio.h>

void rotr(int *a, int *b, int *c);

int main() {
	int n, a, b, c;
	scanf("%d %d %d %d", n, a, b, c);
	for(n=0; n>=0; n--) {
	  rotr( &a, &b, &c);	
	  printf("%d %d %d\n", a, b, c);
	  }
return 0;
}

void rotr(int *a, int *b, int *c) {
	int bufer = *a;
	*a = *c;
	*c = *b;
	*b = bufer;
	return 0;
}
