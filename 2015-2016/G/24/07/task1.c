#include <stdio.h>

void rotr(int *a, int *b, int *c);

int main(){

	int a, b, c, n, i;

	do{

		scanf("%d %d %d %d", &a, &b, &c, &n);

	}while(n<=0);

	while(n){

		rotr(&a,&b,&c);
		n--;

	}
	printf("%d %d %d \n", a, b, c);

	return 0;

}

void rotr(int *a, int *b, int *c){

	int rotate;

	rotate = *a;
	*a = *c;
	*c = *b;
	*b = rotate;

}
