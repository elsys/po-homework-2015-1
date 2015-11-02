#include <stdio.h>

int exact_square(int number);

int main(){

	int number, check;

	check = scanf("%d", &number);

	while(check!=1){

		check = scanf("%d", &number);

	}

	printf("%d \n" , exact_square(number));

	return 0;

}

int exact_square(int number){

	int square = 1;

	while(square<=number/square){

		if(number == square*square){

			return 1;

		}else{

			square++;

		}

	}


	return 0;

};
