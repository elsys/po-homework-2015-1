/*Programa za prevod ot rimski chisla v rimski. Vse oshte izpuska nqkoi nepravilno vuvedeni chisla, no se spravq s vsicki pravilno vuvedeni.*/

#include <stdio.h>
#include <string.h>

int main(){
	char c[10];
	int arabic = 0, iErr=0, i;
	scanf("%s", c);

	i = strlen(c)-1;
	while(c[i] == 'I' && iErr < 3){
		arabic++;
		iErr++;
		i--;
	}
	if(c[i] == 'V'){
		arabic += 5;
		i--;
	}
	if(c[i] == 'I'){
		arabic--;
		i--;
	}
	iErr=0;
	while(c[i] == 'X' && iErr < 3){
		arabic += 10;
		iErr++;
		i--;
	
		if(c[i] == 'I'){
			arabic--;
			i--;
		}
	}
	if(c[i] == 'L'){
		arabic += 50;
		i--;
	}
	if(c[i] == 'X'){
		arabic -= 10;
		i--;
	}
	iErr=0;
	while(c[i] == 'C' && iErr < 3){
		arabic += 100;
		iErr++;
		i--;
	
		if(c[i] == 'X'){
			arabic -= 10;
			i--;
		}
	}

	if(i > -1 || arabic > 256){
		printf("Error: Input number too large, incorrect lined up characters or unknown symbol!\n");
	}
	else{
		printf("%d\n", arabic);
	}

	return 0;
}