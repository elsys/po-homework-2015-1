#include <stdio.h>
#include <string.h>

int check_clicks(char);

int main(){

	int counter,sum,check;
	char sentence[160];

	do{

		scanf("%[^\n]s", sentence);
		getchar();

		check = 1;

		for(counter = 0; counter < strlen(sentence); counter++ ){

			if(!check_clicks(sentence[i])){

				printf("Only lower case and spaces are allowed - try again \n");
				check = 0;
				break;

			}		

		}

	}while(!check);

	for(counter = 0, sum = 0; counter < strlen(sentence); counter++ ){

		sum += check_clicks(sentence[counter]);		

	}

	printf("%d \n", sum);

	return 0;	

}

int check_clicks(char letter){

	switch(letter){

		case 'a': return 1;break;
		case 'b': return 2;break;
		case 'c': return 3;break;
		case 'd': return 1;break;
		case 'e': return 2;break;
		case 'f': return 3;break;
		case 'g': return 1;break;
		case 'h': return 2;break;
		case 'i': return 3;break;
		case 'j': return 1;break;
		case 'k': return 2;break;
		case 'l': return 3;break;
		case 'm': return 1;break;
		case 'n': return 2;break;
		case 'o': return 3;break;
		case 'p': return 1;break;
		case 'q': return 2;break;
		case 'r': return 3;break;
		case 's': return 4;break;
		case 't': return 1;break;
		case 'u': return 2;break;
		case 'v': return 3;break;
		case 'w': return 1;break;
		case 'x': return 2;break;
		case 'y': return 3;break;
		case 'z': return 4;break;
		case ' ': return 1;break;
		default : break;

	}

	return 0;

}
