#include <stdio.h>

int main() {
	int n, v, p, a = 0;
	scanf("%d%d%d", &n, &v, &p);
	if (v > 1) {
		return -1;
	}
	if (p > 7) {
		return -1;
	}
	if (v == 1) {
		a = (n | (1 << p));
	}
	else {
		a = (1 << p) ^ n;
	}
	printf("%d", a); 	
	return 0;
}
