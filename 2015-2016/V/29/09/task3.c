#include <stdio.h>
#include <stdlib.h>

int hextrlen(int num) {
	int len = 0;
	for(; num > 0; len++, num/= 16);
	return len;
}

int isPalindrome(int num, char* hex) {
	int len = hextrlen(num);
	for(int i = 0; i < len; i++, num /= 16)
		switch(num%16) {
			case 10:
				hex[i] = 'A';
			break;
			case 11:
				hex[i] = 'A' + 1;
			break;
			case 12:
				hex[i] = 'A' + 2;
			break;
			case 13:
				hex[i] = 'A' + 3;
			break;
			case 14:
				hex[i] = 'A' + 4;
			break;
			case 15:
				hex[i] = 'A' + 5;
			break;
			default:
				hex[i] = (num%16) + 48;
			break;
		}
	for(int i = 0, j = len-1; j >= len/2; i++, j--) {
		if(hex[i] != hex[j])
			return -1;
	}
	return num;
}

int main() {
	int num;
	char* hex;
	scanf("%d", &num);
	do {
		hex = malloc(sizeof(int) * hextrlen(num));
	   }
	   while(isPalindrome(num++, hex) == -1);
	for(int i = 0; i < hextrlen(num-1); i++) {
		printf("%c", hex[i]);
	}

	free(hex);

	return 0;
}