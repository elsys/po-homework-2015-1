#include <stdio.h>

void rotr(int *a, int *b, int *c) {
	int temp;
	temp = *a;
	*a = *c;
	*c = *b;
	*b = temp;
}
int main() {
	int a, b, c, rotates, i;
	scanf("%d %d %d %d", &a, &b, &c, &rotates);
	
	for(i=0; i<rotates; i++){
		rotr(&a, &b, &c);
	}
	
	printf("%d %d %d", a, b, c);
	
	return 0;
}
