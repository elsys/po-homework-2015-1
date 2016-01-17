#include<stdio.h>

int main() {
	int a,b;

	do {
		scanf("%d", &a);
	} while (a < 0 || a > 7);

	do {
		scanf("%d", &b);
	} while (b < 0 || b > 200);

	b=b>>a;
	if(b%10==1){
		b=1;
		printf("%d",b);
	}
	else {
		b=0;
		printf("%d",b);
	}

	return 0;
}
