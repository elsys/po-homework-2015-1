#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int exact_square(char*);

int main() {

	char num[150];
	int isExact, index, temp;

	for(index = 0; index < 150; index++) {
		temp = getchar();
		if(temp == '\n') break;
		num[index] = temp;
	}

	isExact = exact_square(num);
	printf("%d \n\n", isExact);

	return 0;

}

int exact_square(char* num){
	
	int finalNumber, numberForRoot;

	finalNumber = atoi(num);

	for(numberForRoot = 2; numberForRoot < finalNumber; numberForRoot++) {
		if(finalNumber == numberForRoot * numberForRoot) return 1;
	}

	return 0;

}