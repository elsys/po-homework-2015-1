#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char hex_number[20];
int palindrom(char *);
void decimal_to_hex(int );


int main(){
	
	int number, lenght, triger, hop, bin;

	scanf("%d", &number);
	
	for ( hop = 1 ; hop != 0 ; ){

		decimal_to_hex(number);
		
	lenght = strlen(hex_number) - 1  ;
	bin = lenght;
	if(bin == 1 ) bin = 2;
	for ( triger = 0 ; triger < bin / 2  ; triger ++ , lenght --){	

		if( hex_number[triger] != hex_number[lenght] ) break;		
			if( triger + 1 == bin / 2 ) { 
				printf("%s", hex_number); 
				hop = 0;
				break;
			}
	}

	number = number + 1;
	
	}	
	printf("\n");
		
	return 0;
}


void decimal_to_hex(int num){
	int helper1, count, dochum , op ;

	char hex[] = "0123456789ABCDEF", changer;

	for ( count = 0 ; num != 0 ; count++ ){
		helper1 = num % 16 ;
		num = num / 16;
		hex_number[count] = hex[helper1];	
		
	}
	op = strlen(hex_number) - 1;
	for (dochum = 0 ; dochum < op ; dochum ++, op--){
	
		changer = hex_number[op];
		hex_number[op] = hex_number[dochum];
		hex_number[dochum] = changer;
	}
}


