#include <stdio.h>

int rotr(int *a, int *b, int *c);

int main(){
	int a, b, c, i;
		scanf("%d %d %d %d", &a, &b, &c, &i);
	while(i >=0) {
		rotr(&a, &b, &c);
		printf("%d %d %d\n", a, b ,c);
		i--;
		return 0;
	}
}

int rotr(int *a, int *b, int *c){
	int temp;

	temp = *c;
	*c = *b;
	*b = *a;
	*a = temp;
	return 0;
}
