#include <stdio.h>

int main() {
	int Array[200], num, count, counter, breaker = 0, Rudolph = 0;

	scanf ("%d", &num);

	for (count = 0; count < num; count++) scanf ("%d", &Array[count]);

	for (count = 0; count < num; count++) {
		for (counter = 0, breaker = 0; counter < num; counter++) {
		if (Array[count] == Array[counter]) breaker++; 
		}
		if (breaker == 1) Rudolph = Array[count];
	}
	printf ("%d", Rudolph);

	return 0;
}
