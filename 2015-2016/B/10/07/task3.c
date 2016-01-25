#include <stdio.h>
#include <string.h>

int check_palindrome(int); //Declaration

int main () {

	int InputNumber;

	scanf("%d",&InputNumber);

	while (!check_palindrome(InputNumber)) {
	
		InputNumber++;
	}

	printf("%X\n",InputNumber);

	return 0;
}

int check_palindrome(int number) {

	char Hex[51];
	int counter = 0,tmp,remain;
	int index = 0,length;

	tmp = number;

	for (counter = 0; tmp != 0; counter++) {
		remain = tmp%16;
		if (remain >= 0 && remain <= 9) remain = remain + 48;
		else remain = remain + 55;
		
		Hex[counter] = remain;
		tmp = tmp/16;
	}

	length = strlen(Hex);

	for (index = 0; index < (length/2);index++) {

		if (Hex[index] != Hex[length - index - 1]) {
			
			return 0;
		}
	}

	return 5;
}



