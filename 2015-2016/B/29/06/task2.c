#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int index = 0, counter = 0;
	char string[160];
	fgets(string, 160, stdin);
	for( ; index < strlen(string) ; index++){
		if(string[index]=='a')counter = counter+1;
		if(string[index]=='d')counter = counter+1;
		if(string[index]=='g')counter = counter+1;
		if(string[index]=='j')counter = counter+1;
		if(string[index]=='m')counter = counter+1;
		if(string[index]=='p')counter = counter+1;
		if(string[index]=='t')counter = counter+1;
		if(string[index]=='w')counter = counter+1;
		if(string[index]==' ')counter = counter+1;


		if(string[index]=='b')counter = counter+2;
		if(string[index]=='e')counter = counter+2;
		if(string[index]=='h')counter = counter+2;
		if(string[index]=='k')counter = counter+2;
		if(string[index]=='n')counter = counter+2;
		if(string[index]=='q')counter = counter+2;
		if(string[index]=='u')counter = counter+2;
		if(string[index]=='x')counter = counter+2;

		if(string[index]=='c')counter = counter+3;
		if(string[index]=='f')counter = counter+3;
		if(string[index]=='i')counter = counter+3;
		if(string[index]=='l')counter = counter+3;
		if(string[index]=='o')counter = counter+3;
		if(string[index]=='r')counter = counter+3;
		if(string[index]=='v')counter = counter+3;
		if(string[index]=='z')counter = counter+3;

		if(string[index]=='s')counter = counter+4;
		if(string[index]=='z')counter = counter+4;
				
	}
	printf("%d",counter);
}
