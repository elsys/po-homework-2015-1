#include <stdio.h>
#include <string.h>

int is_letter(char);
int transform_hex(char);
char transform_decimal(int);
int to_decimal(char, char);
void to_lower(char*, int);
void print_hex(int);

int main() {

	int i, length;
	char option, color[13], *temp;
	
	scanf("%c", &option);

	getchar();

	if (option == 'h') {
	    
		fgets(color, 14, stdin);
		length = strlen(color);
		length = color[length - 1] == '\n' ? length - 1 : length;
		to_lower(color, length);
		
		printf("rgb(%d, %d, %d)", to_decimal(color[1], color[2]), to_decimal(color[3], color[4]), to_decimal(color[5], color[6]));
		
	} else if (option == 'd') {
	    
		fgets(color, 14, stdin);
		temp = strtok(color, ", ");
		printf("#");

		while (temp != NULL) {
			sscanf(temp, "%d", &i);
			print_hex(i);
			temp = strtok(NULL, ", ");
		}
	}
	
	return 0;
}

int is_letter(char symbol) {

	if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z')) {
		return 1;
	}
	
	return 0;
}

void to_lower(char *string, int length) {

	for (int i = 0; i < length; i++) {
	    
		if (is_letter(string[i])) {
		    
			if (string[i] >= 'A' && string[i] <= 'Z') {
				string[i] = string[i] - ('A' - 'a');
			}
		}
	}
}

int transform_hex(char symbol) {
    
	if (is_letter(symbol)) {
		switch (symbol) {
			case 'a':
				return 10;
			case 'b':
				return 11;
			case 'c':
				return 12;
			case 'd':
				return 13;
			case 'e':
				return 14;
			case 'f':
				return 15;
		}
	}

	return symbol - '0';
}

int to_decimal(char a, char b) {
	return transform_hex(a) * 16 + transform_hex(b);
}

char transform_decimal(int digit) {

	if (digit > 9) {
		switch (digit) {
			case 10:
				return 'a';
			case 11:
				return 'b';
			case 12:
				return 'c';
			case 13:
				return 'd';
			case 14:
				return 'e';
			case 15:
                return 'f';
		}
	}

	return (char)(digit + '0');

}

void print_hex(int number) {
    
	if (number <= 0) {
		return;
	}
	
	print_hex(number / 16);
	printf("%c", transform_decimal(number % 16));
}
