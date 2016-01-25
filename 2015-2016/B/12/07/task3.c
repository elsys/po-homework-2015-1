#include <stdio.h>
#include <string.h>

int main() {
	int num, num_cpy, count, check1, check2, temp, breaker = 0;
	char arr[9];

	scanf ("%d", &num);

	num -= 1;

	while (breaker == 0) {
	num++;

	num_cpy = num;

	for (count = 0; num_cpy > 0; count++) {
	temp = num_cpy % 16;

	if (temp > 9) arr[count] = temp + 55;
	else arr[count] = temp + 48;

	num_cpy /= 16;
	}

	breaker++;

	for (check1 = 0, check2 = count - 1; check1 < check2; check1++, check2--) {
	if (arr[check1] != arr[check2]) breaker = 0;
	}

	}

	printf ("%X", num);

	return 0;
}
