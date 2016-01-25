#include <stdio.h>
#include <string.h>
#define max 100

int cases(char s);

int main(){
		
	long long int number;
	long long int replacer;
	char hexnumber[max];
	int check = 0;
	
	scanf("%lli", &number);
	
	if(number <= 16){
		hexnumber[0] = number % 16;
		hexnumber[0] = cases(hexnumber[0]);
		printf("%c\n", hexnumber[0]);
		return 0;
	}
	
	do{
		replacer = number;
		for(int i = 0; replacer != 0; i++){
			hexnumber[i] = replacer % 16;
			replacer /= 16;
			hexnumber[i] = cases(hexnumber[i]);
		}
		for(int i = 0; i < strlen(hexnumber)/2 ; i++){
			if(hexnumber[i] == hexnumber[strlen(hexnumber) - i - 1]){
				check = 1;
			}
			else{
				check = 0;
				break;
			}
		}
		number ++;
	}while(check == 0);
	
	printf("%s\n", hexnumber);

	return 0;
}

int cases(char s){
	switch(s){
		case 0: return 48;
		case 1: return 49;
		case 2: return 50;
		case 3: return 51;
		case 4: return 52;
		case 5: return 53;
		case 6: return 54;
		case 7: return 55;
		case 8: return 56;
		case 9: return 57;
		case 10: return 65;
		case 11: return 66;
		case 12: return 67;
		case 13: return 68;
		case 14: return 69;
		case 15: return 70;
		default: break;
	}
	return 0;
}
