#include <stdio.h>

int rotr(int *a, int *b, int *c);

int main() {
	int a, b, c, n;
		scanf("%d %d %d %d", &a, &b, &c, &n);
	for(n=0; n>=0; n--) {
		rotr(&a, &b, &c);
		printf("%d %d %d\n", a, b ,c);
		}
return 0;	
}

int rotr(int *a, int *b, int *c) {

int d; 

	d = *c;

	*c = *b;
	*b = *a;
	*a = d;
return 0;
}
