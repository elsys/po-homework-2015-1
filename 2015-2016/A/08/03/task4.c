/*Programa za prevod ot rimski chisla v arabski*/

#include <stdio.h>

int main(){
	int arabic;
	scanf("%d", &arabic);

	if(arabic>256){
		printf("Too large input value!\n");
		return 1;
	}
	while(arabic >= 100){
		printf("C");
		arabic -= 100;
	}
	if(arabic >= 90){
		printf("XC");
		arabic -= 90;
	}
	if(arabic >= 50){
		printf("L");
		arabic -= 50;
	}
	if(arabic >= 40){
		printf("XL");
		arabic -= 40;
	}
	while(arabic >= 10){
		printf("X");
		arabic -= 10;
	}
	if(arabic >= 9){
		printf("IX");
		arabic -= 9;
	}
	if(arabic >= 5){
		printf("V");
		arabic -= 5;
	}
	if(arabic >= 4){
		printf("IV");
		arabic -= 4;
	}
	while(arabic >= 1){
		printf("I");
		arabic--;
	}
	printf("\n");

	return 0;
}