#include <stdio.h>

int main() {
	int a, b;

	do {
	scanf ("%d", &a);
	} while (a < 0 || a > 7);

	do {
	scanf ("%d", &b);
	} while (a < 0 || a > 200);

	if ( ( (b >> a) & 1) == 1) printf ("1");
	else printf ("0");

	return 0;
}
