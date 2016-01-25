#include <stdio.h>

int main() {
	int n, v, p;

	scanf ("%d", &n);

	do {
	scanf ("%d", &v);
	} while (v != 0 && v != 1);

	do {
	scanf ("%d", &p);
	} while (p < 0 || p > 7);

	if ( (n >> p) == 0 && v == 1) n = n + (1 << p);
	if ( (n >> p) == 1 && v == 0) n = n - (1 << p);

	printf ("%d", n);

	return 0;
}

