#include <stdio.h>
#include <string.h>

int palindrome_check(long int);

int main() {
	long int decimal;

	scanf("%ld", &decimal);
	palindrome_check(decimal);

	return 0;
}

int palindrome_check (long int decimal) {
	long int a;
	int l = 0, temp, temp_d, j = 1, i;
	char hexadecimal[100];
	int palindrome;

	a = decimal;

	while(a != 0) {
		temp = a % 16;

		if(temp < 10) 
			temp += 48;
		else 
			temp += 55;

		hexadecimal[l++] = temp;

		a /= 16;

	}

	for(i = 0, j = l - 1; i < j; i++, j--) {
		temp_d = hexadecimal[i];
		hexadecimal[i] = hexadecimal[j];
		hexadecimal[j] = temp_d;
	}

	for(i = 0, j = l - 1; i < j; i++, j--) 
		if(hexadecimal[i] == hexadecimal[j]) palindrome = 1;
		else { palindrome = 0; palindrome_check(++decimal);}

 	if(palindrome) {
	 	for(i = 0; i < l; i++) {
			printf("%c", hexadecimal[i]);
		}
		
			printf("\n\n");
	}

	return 0;
}