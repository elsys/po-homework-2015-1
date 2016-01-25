#include <stdio.h>

int main() {

	int n, v, p;
	scanf("%d", &n);
	do
		scanf("%d", &v);
	while (v != 0 && v != 1);
	do
		scanf("%d", &p);
	while (p < 0 || p > 7);	
	int tmp = 1 << p;
	if(v) {
		n |= tmp;
	}
	else {
		n &= ~tmp;
	}
	printf("%d", n);
	return 0;
}