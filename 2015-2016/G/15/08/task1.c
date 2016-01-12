#include <stdio.h>
#include <string.h>

int decvalue(char);
char hexvalue(int);
void h_to_d(char [],int []);
void d_to_h(int [], char []);
int main(){

int dec[3],counter;
char choose,hex[7];
scanf("%c", &choose);

	if(choose == 'h'){
	scanf("%s" , hex);
	h_to_d(hex, dec);
	printf("rgb(%d, %d, %d)\n",dec[0], dec[1], dec[2]);	
	
	}else if(choose == 'd'){
		for(counter = 0; counter < 3; counter++){
			scanf("%d" ,&dec[counter]);
			
		}
		d_to_h(dec, hex);
		printf("%s \n", hex);
	
	}else {
		return 0;
	}



}

char hexvalue(int dec){
	switch(dec){
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

int decvalue(char hex){

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
void h_to_d(char hex[7],int dec[3]){

int counth,countd;
	for(counth = 1,countd = 0;counth < strlen(hex);countd++,counth += 2 ){
		dec[countd] = decvalue(hex[counth])*16 + decvalue(hex[counth + 1]);
	}



}
void d_to_h(int dec[3],char hex[7]){
int countd,counth;
hex[0] = '#';
	for(counth = 1,countd = 0;counth < strlen(hex);countd++,counth += 2 ){
		hex[counth + 1] =  hexvalue(dec[countd]%16);
		dec[countd]/= 16;
		hex[counth] = hexvalue(dec[countd]%16);
	}


}
