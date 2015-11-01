#include <stdio.h>
#include <string.h>

void create_letter_distribution_diagram();

int main() {

	create_letter_distribution_diagram();

	return 0;
}

void create_letter_distribution_diagram() {

	int i, j, letter, sorted = 0;
	char symbol, string[100], letters[26][2], temp[2];

	for (i = 0, j = 'a'; i < 26; i++, j++) {
		letters[i][0] = j;
		letters[i][1] = '0';
	}

	i = 0;
	while (1) {
		symbol = getchar();

		if (symbol == EOF) {
			break;
		} else {
			string[i] = symbol;
			i++;
		}
	}
	
	for (i = 0, j = 'a'; i < strlen(string); i++, j++) {
		if (string[i] >= 'A' && string[i] <= 'Z') {
			string[i] -= 'A' - 'a';
		}
		letter = 25 + string[i] - 'z';
		letters[letter][1] = (letters[letter][1] - '0' + 1) + '0';
	}

	j = 0;
	while (!sorted) {
		j++;
		sorted = 1;
		for (i = 0; i < 26 - j; i++) {
			if (letters[i][1] < letters[i + 1][1]) {

				temp[0] = letters[i][0];
				temp[1] = letters[i][1];

				letters[i][0] = letters[i + 1][0];
				letters[i][1] = letters[i + 1][1];

				letters[i + 1][0] = temp[0];
				letters[i + 1][1] = temp[1];

				sorted = 0;
			}
		}
	}
	
	for (i = 0; i < 26; i++) {
		printf("%c: %d\n", letters[i][0], letters[i][1] - '0');
	}
}
