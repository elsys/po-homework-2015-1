#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int is_prime(char*);

int main() {
	int temp, isPrime, index;
	char num[150];

	for (index = 0; index < 150; index++){
		temp = getchar();
		if(temp == '\n') break;
		num[index] = temp;
	}

	isPrime = is_prime(num);

	printf("%d \n\n", isPrime);

	return 0;
}

int is_prime(char* num) {

	int index, lenght, finalNumber;

	lenght = strlen(num);
	for(index = 0; index < lenght; index++){
		if(num[index] < '0' || num[index] > '9') return -1;
	}

	finalNumber = atoi(num);

	if(finalNumber == 1 || finalNumber == 0) return 0;
	for(index = 2; index < finalNumber; index++){
		if(finalNumber % index == 0) return 0;
	}

	return 1;



}