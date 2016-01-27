#include <stdio.h>
#include <string.h>

int palindrom(int number, char []);
char get_hex(int);

int main(){

	int number;
	char hex[16];

	scanf("%d", &number);
	
	while(palindrom(number, hex) == 0){
	
		number++;		
	
	}
	
	printf("%s \n", hex);
		
}

char get_hex(int get_from){

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
		default: return 'G';break;

	}

}

int palindrom(int number, char hex[16]){

	int count, count2;
	
	for(count = 0; number != 0; count++){
	
		hex[count] = get_hex(number%16);
		number /= 16;
	
	}
	
	hex[count] = '\0';
	
	for(count = 0, count2 = strlen(hex) - 1; count < (strlen(hex) - 1); count++, count2--){
	
		if(hex[count] != hex[count2]){
			
			return 0;
			
		}
	
	}

	return 1;

}
