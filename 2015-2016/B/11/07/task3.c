#include <stdio.h>

/* 2^32 ~ 9 decimal chars */
#define DIGITS 9

int isPalindrom(char * buffer) {
	int isPoly = 1;
	int num_lenght = strlen(buffer);
	int counter;

	for (counter = 0; counter < (num_lenght/2); counter ++) {
		if (buffer[num_lenght - counter - 1] != buffer[counter]) {
			isPoly = 0;
			break;
		}
	}

	return isPoly;
}

void reverse_string(char * buffer) {
	int lenght = strlen(buffer);
	int counter = 0;
	char ch;

	for (counter = 0; counter < (lenght/2); counter ++) {
		ch = buffer[counter];
		buffer[counter] = buffer[lenght - counter - 1];
		buffer[lenght - counter - 1] = ch;
	}
}

void hexadecimal(int number, char * buffer) {
	int counter;
	char HEXDIGITS[] = "0123456789ABCDEF";

	for (counter = 0; number > 0; number /= 16, counter++) {
		buffer[counter] = HEXDIGITS[number % 16];
	}
	buffer[counter] = '\0'; /* string terminator */
	reverse_string(buffer);
}

int main() {
	int num;
	char hex[DIGITS]; 		/* hex value in ASCII chars */
	int isPoly = 0;

	scanf("%d", &num);

	do {
		hexadecimal(num, hex);
		isPoly = isPalindrom(hex);
		if (isPoly == 1) {
			printf("%s\n", hex);
		}
		num ++;
	} while (isPoly == 0);

	return 0;
}
