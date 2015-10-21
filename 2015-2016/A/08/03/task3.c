/*sortirane na masiv ot 13 simvola(karti ot 2 do A)*/

#include <stdio.h>

int Integerize(char);

int main(){
	char deck[14];
	scanf("%s", deck);
	
	int i, j;
	for(i=1; i<13; i++){
		for(j=0; j<13-i; j++){

			if(Integerize(deck[j]) > Integerize(deck[j+1])){
				char temp = deck[j];
				deck[j] = deck[j+1];
				deck[j+1] = temp;
			}

		}
	}

	printf("%s\n", deck);
	return 0;
}

int Integerize(char c){
	switch(c){
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		case 'T': return 10;
		case 'J': return 11;
		case 'Q': return 12;
		case 'K': return 13;
		case 'A': return 14;
		default: return 1;	// v momenta nenujno, no moje da se naloji funkciqta da dava greshka
	}
}