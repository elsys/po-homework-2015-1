#include <stdio.h>

void next_generation(int*, int*, int);
void print_generation(int*, int);
int is_alive(int*, int);

int main() {
	int current[20], next[20], n, length;
	scanf("%d", &n);

	if (n <= 0) {
		return 0;
	} else if (n > 20) {
		n = 20;
	}

	length = n;

	while (n > 0) {
		scanf("%d", &current[length - n]);
		n--;
	}

	print_generation(current, length);
	do {
		n++;
		next_generation(current, next, length);
		print_generation(next, length);
	} while (n <= 1000 && is_alive(next, length));

	return 0;
}

void next_generation(int *current, int *next, int length) {
	int i;
	
	next[0] = 0;
	next[length - 1] = 0;

	for (i = 1; i < length - 1; i++) {
		if (current[i] == 0 && (current[i - 1] || current[i + 1]) && !(current[i - 1] && current[i + 1])) {
			next[i] = 1;
		} else {
			next[i] = 0;
		}
	}

	for (i = 0; i < length; i++) {
		current[i] = next[i];
	}
}

void print_generation(int *generation, int length) {
	int i = 0;
	for (; i < length; i++) {
		printf("%c", generation[i] == 0 ? '.' : '*');
	}

	printf("\n");
}

int is_alive(int *generation, int length) {
	int i = 0;
	for (; i < length; i++) {
		if (generation[i] == 1) {
			return 1;
		}
	}
	return 0;
}