#include <stdio.h>

int main() {
	int a, b;
	do
		scanf("%d%d", &a, &b);
	while((a < 0 || a > 7) && (b < 0 || b > 200));

	printf("%d", (b >> a) & 1);

	return 0;
}