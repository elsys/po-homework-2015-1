/*Programa za printirane na ASCII tablicata*/

#include <stdio.h>

int main(){
	int i;
	for(i=0; i<256; i++)
		printf("%d.\t%c\n", i, i);
	return 0;
}
