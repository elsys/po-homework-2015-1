/*Programa za obrushtane na simvolen niz (bez buffer :) )*/

#include <stdio.h>

void Reverse();

int main(){
	Reverse();
	printf("\n");
	return 0;
}

void Reverse(){
	char c;
	c=getchar();
	if(c!='\n'){
		Reverse();
		printf("%c", c);
	}
}