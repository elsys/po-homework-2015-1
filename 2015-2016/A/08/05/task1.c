#include <stdio.h>

void rotr(int * a, int * b, int * c);

int main(){
	int a, b, c, n, i;

	scanf("%d %d %d %d", &a, &b, &c, &n);

	for(i = 0; i < n; i++){
		rotr(&a, &b, &c);
	}

	printf("%d %d %d", a, b, c);

	return 0;
}

void rotr(int * a, int * b, int * c){
	int temp = *a;
	*a = *c;
	*c = *b;
	*b = temp;
}