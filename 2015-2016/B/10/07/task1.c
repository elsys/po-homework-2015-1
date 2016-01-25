#include <stdio.h>

int main () {

	int a;
	int b;
	int bit;
	
	scanf("%d %d", &a, &b);

	bit = ((b >> a) & 1);

	printf("%d\n",bit);

	return 0;
}
