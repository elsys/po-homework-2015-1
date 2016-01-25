#include <stdio.h>

int main() {

	int a, b;
	
	scanf("%d%d", &a, &b);
	if (a > 7) {
		return -1;
	}
	if (b > 200) {
		return -1;
	}
	b = (b >> a) & 1;
	printf("%d", b);

	return 0;	
}
