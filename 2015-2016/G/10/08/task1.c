#include <stdio.h>
#include <string.h>

void make_decimal(char [],int []);
void make_hex(int [], char []);
int decimalvalue(char);
char hexvalue(int);

int main(){

	int decimal[3],i;
	char n,hex[7];
	
	scanf("%c", &n);

	if(n == 'h'){
	scanf("%s" , hex);
	make_decimal(hex, decimal);
	printf("rgb(%d, %d, %d)\n",decimal[0], decimal[1], decimal[2]);	
	
	}else if(n == 'd'){
	
		for(i = 0; i < 3; i++){
		
			scanf("%d" ,&decimal[i]);
			
		}
		
		make_hex(decimal, hex);
		
		printf("%s%s%s%s%s%s%s \n", hex[0], hex[1], hex[2], hex[3], hex[4], hex[5], hex[6]);
	
	}else {
	
		return 0;
		
	}



}

char hexvalue(int decimal){
	switch(decimal){
	
		case  0: return '0'; break;
		case  1: return '1'; break;
		case  2: return '2'; break;
		case  3: return '3'; break;
		case  4: return '4'; break;
		case  5: return '5'; break;
		case  6: return '6'; break;
		case  7: return '7'; break;
		case  8: return '8'; break;
		case  9: return '9'; break;
		case 10: return 'a'; break;
		case 11: return 'b'; break;
		case 12: return 'c'; break;
		case 13: return 'd'; break;
		case 14: return 'e'; break;
		case 15: return 'f'; break;
	
	}

	return 0;
	
}

int decimalvalue(char hex){

	switch(hex){
	
		case '0': return  0; break; 
		case '1': return  1; break;
		case '2': return  2; break;
		case '3': return  3; break;
		case '4': return  4; break;
		case '5': return  5; break; 
		case '6': return  6; break;
		case '7': return  7; break;
		case '8': return  8; break;
		case '9': return  9; break;
		case 'a': return 10; break; 
		case 'b': return 11; break;
		case 'c': return 12; break;
		case 'd': return 13; break;
		case 'e': return 14; break;
		case 'f': return 15; break;
	
	
	}


	return 0;


}
void make_decimal(char hex[7],int decimal[3]){

	int counth,countd;
	
	for(counth = 1,countd = 0;counth < strlen(hex);countd++,counth += 2 ){
	
		decimal[countd] = hexvalue(hex[counth])*16 + hexvalue(hex[counth + 1]);
		
	}



}
void make_hex(int decimal[3],char hex[7]){

	int countd,counth;
	
	hex[0] = '#';
	
	for(counth = 1,countd = 0;counth < strlen(hex);countd++,counth += 2 ){
	
		hex[counth + 1] =  hexvalue(decimal[countd]%16);
		decimal[countd]/= 16;
		hex[counth] = hexvalue(decimal[countd]%16);
		
	}


}
