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
	printf("digits_count= %d", digits_count);
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
	printf("\n1: %d times", one);
	printf("\n2: %d times", two);
	printf("\n3: %d times", three);
	printf("\n4: %d times", four);
	printf("\n5: %d times", five);
	printf("\n6: %d times", six);
	printf("\n7: %d times", seven);
	printf("\n8: %d times", eight);
	printf("\n9: %d times", nine);
	printf("\n0: %d times", zero);
	return 0;
} 
