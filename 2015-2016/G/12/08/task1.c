#include <stdio.h>

char hex_val(int);
int dec_val(char);
void dec_to_hex(int [], char []);
void hex_to_dec(char [], int []);

int main(){

char choose, hex[7];
int dec[3];

scanf("%c",&choose);

	if(choose == 'h'){
	
		scanf("%s", hex);
		hex_to_dec(hex, dec);
		printf("rgb(%d, %d, %d)\n", dec[0], dec[1], dec[2]);
		
	}else if(choose == 'd'){
	
			scanf("%d,%d,%d", &dec[0], &dec[1], &dec[2]);
		
			dec_to_hex(dec, hex);
			printf("%s\n", hex);
	
	}else{
		return 0;
	}
	





return 0;
}

void dec_to_hex(int dec[3], char hex[7]){

	int counter_1 = 1;
	int counter_2 = 0;
	hex[0] = '#';
		
	for(;counter_1 < 7; counter_1+=2, counter_2++){
	
		hex[counter_1 + 1] = hex_val(dec[counter_2]%16);
		dec[counter_2]/=16;
		hex[counter_1]=hex_val(dec[counter_2]%16);
	
	}


}



void hex_to_dec(char hex[7], int dec[3]){

	int counter_1 = 1;
	int counter_2 = 0;
	
	for(;counter_1 < 7; counter_1+=2, counter_2++){
	
		dec[counter_2] = dec_val(hex[counter_1])*16 + dec_val(hex[counter_1 + 1]);
	
	}


}

int dec_val(char hex){

	switch(hex){

	case '0': return 0;break;
	case '1': return 1;break;
	case '2': return 2;break;
	case '3': return 3;break;
	case '4': return 4;break;
	case '5': return 5;break;
	case '6': return 6;break;
	case '7': return 7;break;
	case '8': return 8;break;
	case '9': return 9;break;
	case 'a': return 10;break;
	case 'b': return 11;break;
	case 'c': return 12;break;
	case 'd': return 13;break;
	case 'e': return 14;break;
	case 'f': return 15;break;
	
	}
	
	return 0;
}

char hex_val(int dec){

	switch(dec){
	
	case 0: return '0';break;
	case 1: return '1';break;
	case 2: return '2';break;
	case 3: return '3';break;
	case 4: return '4';break;
	case 5: return '5';break;
	case 6: return '6';break;
	case 7: return '7';break;
	case 8: return '8';break;
	case 9: return '9';break;
	case 10: return 'a';break;
	case 11: return 'b';break;
	case 12: return 'c';break;
	case 13: return 'd';break;
	case 14: return 'e';break;
	case 15: return 'f';break;
	
	
	}

	return 0;
}
