#include <stdio.h>
#include <string.h>
#define BASE 16

int is_palindrom(int number, char []);
char get_char(int);

int main(){

	int number;
	char hex[16];

	scanf("%d", &number);
	
	while(!is_palindrom(number, hex)){
	
		number++;		
	
	}
	
	printf("%s \n", hex);
		
}

int is_palindrom(int number, char hex[16]){

	int counter, counter_c;
	
	for(counter = 0; number != 0; counter++){
	
		hex[counter] = get_char(number%BASE);
		number /= BASE;
	
	}
	
	hex[counter] = '\0';
	
	for(counter = 0, counter_c = strlen(hex) - 1; counter < (strlen(hex) - 1); counter++, counter_c--){
	
		if(hex[counter] != hex[counter_c]){
			
				return 0;
			
		}
	
	}

	return 1;

}

char get_char(int get_from){

	switch(get_from){

		case  0: return '0';break;
		case  1: return '1';break;
		case  2: return '2';break;
		case  3: return '3';break;
		case  4: return '4';break;
		case  5: return '5';break;
		case  6: return '6';break;
		case  7: return '7';break;
		case  8: return '8';break;
		case  9: return '9';break;
		case 10: return 'A';break;
		case 11: return 'B';break;
		case 12: return 'C';break;
		case 13: return 'D';break;
		case 14: return 'E';break;
		case 15: return 'F';break;
		default: return '-';break;

	}

}
