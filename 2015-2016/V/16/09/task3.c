#include <stdio.h>

int convert_to_hex(char hex[], int n);
int find_palindrome(char hex[], int j);

int main() {
	
	char hex[200];
	int n;
	scanf("%d", &n);
	int j = convert_to_hex(hex, n);
	while(!find_palindrome(hex, j)) {
		n += 1;
		j = convert_to_hex(hex, n);
	}
	while (j > 0) {
		j--;
		printf("%c", hex[j]);
	}
	return 0;
}

int convert_to_hex(char hex[], int n){
	int i;
	for (i = 0; n > 0; i++) {
		switch (n % 16) {
			case 10 : hex[i] = 'A'; break;
			case 11 : hex[i] = 'B'; break;
			case 12 : hex[i] = 'C'; break;
			case 13 : hex[i] = 'D'; break;
			case 14 : hex[i] = 'E'; break;
			case 15 : hex[i] = 'F'; break;
			default : hex[i] = n % 16 + 48;
		}
		n = n / 16;
	}
	return i;
}

int find_palindrome(char hex[], int j) {
	int k;
	for (int i = 0; i < j / 2; i++) {
		k = j - 1;
		j--;
		if (hex[i] != hex[k]) {
			return 0;
		}
	}
	return 1;
}
