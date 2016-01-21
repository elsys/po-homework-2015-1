#include <stdio.h>

int main(){
	int a, b;

	scanf("%d", &a);
	if(a < 0 && a > 7){
		printf("a is not in range");
		return -1;
	}
	scanf("%d", &b);
	if(b < 0 && b > 200){
		printf("b is not in range");
		return -1;
	}

	if(b >> a & 1)
		printf("1");
	else
		printf("0");

	return 0;
}