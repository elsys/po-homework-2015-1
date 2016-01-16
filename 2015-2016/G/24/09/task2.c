#include <stdio.h>
#define BASE 2

void bin_converter(int, int [8]);
int dec_converter(int [8]);

int main(){

	int n,v,p,bin[8] = {0, 0, 0, 0, 0, 0, 0, 0};

	scanf("%d", &n);

	do{
	
		scanf("%d", &v);
	
	}while( v < 0 || v > 1 );
	
	do{
	
		scanf("%d", &p);
	
	}while( p < 0 || p > 7 );
	
	bin_converter(n, bin);
	
	bin[7 - p] = v;
	
	printf("%d \n", dec_converter(bin) );
	
}

void bin_converter(int from, int to[8]){

	int pos = 7;
	
	while(from != 0){
	
		to[pos] = from % BASE;
		from /= BASE;
		pos--;
	
	}

}

int dec_converter(int from[8]){

	int pos, to;
	
	to = from[0]*BASE;
	
	for(pos = 1;pos < 7; pos++){
	
		to = (to + from[pos])*BASE;
	
	}
	
	to = to + from[7];
	
	return to;

}
