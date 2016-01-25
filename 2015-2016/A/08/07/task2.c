#include <stdio.h>

int main(){
	int n, v, p;
	scanf("%d %d %d", &n, &v, &p);
	if(v < 0 && v > 1){
		printf("v not in range");
		return -1;
	}
	if(p < 0 && p > 7){
		printf("p not in range");
		return -1;
	}

	if(v == 1){
		n = n | (v << p);
	}
	else{
		n = n & (255 & ~(1 << p));
	}

	printf("%d", n);

	return 0;
}