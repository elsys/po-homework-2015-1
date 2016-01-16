#include <stdio.h>
#define BASE 2

void bin_converter(int, int [8]);

int main(){

	int a,b,bin[8] = {0, 0, 0, 0, 0, 0, 0, 0};

	do{
	
		scanf("%d, %d", &a, &b);
	
	}while( a < 0 || a > 7 );
	
	do{
	
		scanf("%d", &b);
	
	}while( b < 0 || b > 200 );
	
	bin_converter(b, bin);
	
	printf("%d \n", bin[7-a]);
	
}

void bin_converter(int from, int to[8]){

	int pos = 7;
	
	while(from != 0){
	
		to[pos] = from % BASE;
		from /= BASE;
		pos--;
	
	}

}
