#include <stdio.h>

int is_prime(int);

int main () {

	int number;
	
	scanf("%d",&number);	

	printf("%d\n",is_prime(number));

	return 0;
}

int is_prime(int num) {

	int counter,divisor;
	char iferr;
	
	iferr = getchar();

	if(iferr >= 'a' && iferr <= 'z') return -1;

	for(divisor = 1;divisor <= num; divisor++) {
		
		if(num%divisor == 0) counter++; 
	
	}

	if(counter == 2) return 1;
	else return 0;
	
}

