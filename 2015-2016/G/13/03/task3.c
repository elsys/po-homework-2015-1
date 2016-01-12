#include<stdio.h>
#include<string.h>

int cardValue(char);

int main(){


	char cards[14];
	char hold;
	int i,j;

	for(i=0;i<13;i++){

		scanf("%12s", &cards[i]);

	}

	for(i=0;i<strlen(cards);i++){

		for(j=i+1;j<strlen(cards);j++){

			if(cardValue(cards[i])>cardValue(cards[j])){

				hold = cards[i];
				cards[i] = cards[j];
				cards[j] = hold;

			}

		}

	}

	for(i=0;i<13;i++){

		printf("%c ", cards[i]);

	}

	printf("\n");

	return 0;

}

int cardValue(char card){

	switch(card){

		case '2': return  2;break;
		case '3': return  3;break;
		case '4': return  4;break;
		case '5': return  5;break;
		case '6': return  6;break;
		case '7': return  7;break;
		case '8': return  8;break;
		case '9': return  9;break;
		case 'T': return 10;break;
		case 'J': return 11;break;
		case 'Q': return 12;break;
		case 'K': return 13;break;
		case 'A': return 14;break;
		default: return 0;break;

	}

	return 0;

}
