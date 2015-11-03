#include <stdio.h>

typedef struct letter_t {
	char symbol;
	int count;
} letter;

int main() {

	int i, j, letter_index, sorted = 0;
	char symbol;
	
	letter letters[26];
	letter temp;

	for (i = 0, j = 'a'; i < 26; i++, j++) {
		letters[i].symbol = j;
		letters[i].count = 0;
	}

	i = 0;
	while (1) {
		symbol = getchar();

		if (symbol == EOF) {
			break;
		} else {
			if (symbol >= 'A' && symbol <= 'Z') {
				symbol -= 'A' - 'a';
			}
			letter_index = 25 + symbol - 'z';
			letters[letter_index].count++;
		}
	}

	j = 0;
	while (!sorted) {
		j++;
		sorted = 1;
		for (i = 0; i < 26 - j; i++) {
			if (letters[i].count < letters[i + 1].count) {

				temp = letters[i];

				letters[i].symbol = letters[i + 1].symbol;
				letters[i].count = letters[i + 1].count;

				letters[i + 1].symbol = temp.symbol;
				letters[i + 1].count = temp.count;

				sorted = 0;
			}
		}
	}

	for (i = 0; i < 26; i++) {
		printf("%c: %d\n", letters[i].symbol, letters[i].count);
	}

	return 0;
}