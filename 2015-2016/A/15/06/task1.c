#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int hexDec(char first, char second);
int hexVal(char symbol);
void decHex(char dec[14]);
int decVal(int num);
int main(){
	char type, *curtoken,input[14];
	int i;
	
	do{
		scanf("%c", &type);
	}while(type!='h' && type!='d');
	getchar();
	fgets(input, 14, stdin);
	if(type=='h'){
		for(i=0; i<7; i++){
			input[i]=tolower(input[i]);
		}
		printf("rgb(%d, %d, %d)", hexDec(input[1], input[2]), hexDec(input[3], input[4]), hexDec(input[5], input[6]));
	}
	else{
		curtoken = strtok(input, ", ");
		
		printf("#");
		while(curtoken!=NULL){
			decHex(curtoken);
			curtoken=strtok(NULL, ", \n");
		}
	}
}

int hexDec(char first, char second){
	int dec = 0;
	dec+=(hexVal(first)*16)+(hexVal(second));
	return dec;
}

int hexVal(char symbol){
	if(symbol >= 'a' && symbol<='f'){
		switch(symbol){
			case 'a':
				return 10;
				break;
			case 'b':
				return 11;
				break;
			case 'c':
				return 12;
				break;
			case 'd':
				return 13;
				break;
			case 'e':
				return 14;
				break;
			case 'f':
				return 15;
				break;
		}
	}
	else{
		return symbol - '0';
	}
	return 1;
}
void decHex(char dec[4]){
	int num;
	int temp1, temp2;
	num=atoi(dec);
	temp1 = decVal(num%16);
	num/=16;
	temp2 = decVal(num%16);
	printf("%c%c", temp2, temp1);
}
int decVal(int num){
	if(num>=10){
		switch(num){
			case 10:
				return 'a';
				break;
			case 11:
				return 'b';
				break;
			case 12:
				return 'c';
				break;
			case 13:
				return 'd';
				break;
			case 14:
				return 'e';
				break;
			case 15:
				return 'f';
				break;
			
		}
	}
	else{
		return num+'0';
	}
	return 1;
}
