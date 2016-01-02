#include <stdio.h>

int main() {
	int  n, c=0, digits_count=0, digit[10];
	scanf("%d", &n);
	
	do {
		c=n%10;
		n=n/10;
		digit[digits_count]=c;
		digits_count++;
	}while(n>0);
	int one=0, two=0, three=0, four=0, five=0, six=0, seven=0, eight=0, nine=0, zero=0;
	
	for( int i=0 ; i<digits_count ; i++ ) {
		switch(digit[i]) {
			case 1: one++; break;
			case 2: two++; break;
			case 3: three++; break;
			case 4: four++; break;
			case 5: five++; break;
			case 6: six++; break;
			case 7: seven++; break;
			case 8: eight++; break;
			case 9: nine++; break;
			case 0: zero++; break;
		}	
	}
	
	if( one>=1 ) {
		printf("\n1: %d times", one);
	} 
	if( two>=1 ){ 
		printf("\n2: %d times", two);
	}
	if( three>=1) {
		printf("\n3: %d times", three);
	}
	if( four>=1 ) {
		printf("\n4: %d times", four);
	}
	if( five>=1) { 
		printf("\n5: %d times", five);
	}
	if( six>=1 ) {
		printf("\n6: %d times", six);
	}
	if( seven>=1) {
		printf("\n7: %d times", seven);
	}
	if( eight>=1 ) {
		printf("\n8: %d times", eight);
	}
	if( nine>=1 ) {
		printf("\n9: %d times", nine);
	}
	if( zero>=1) {
		printf("\n0: %d times", zero);
	}
	return 0;
} 
