#include <stdio.h>

int is_prime(int number);

int main(){

	int number, check;

	check = scanf("%d", &number);

	if(!check){

		printf("%d \n", -1);

	}else{

		printf("%d \n", is_prime(number));

	}

	return 0;

}

int is_prime(int number){

	int divide;

	for(divide = 2;divide < number;divide++){

		if(number%divide == 0){

			return 0;

		}

	}

	return 1;

}
