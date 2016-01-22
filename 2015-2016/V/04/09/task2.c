#include <stdio.h>

int main() {

	int n, v, p;

	scanf("%d", &n);

	do{
		scanf("%d", &v);
	}while(v != 0 && v != 1);

	do{
		scanf("%d", &p);
	}while(p < 0 || p > 7);

	if(v == 1){
		n = n | (1 << p);
	}
	else
		n = n & (~(1 << p));

	printf("%d\n", n);
	return 0;
}