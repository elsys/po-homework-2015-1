#include <stdio.h>
#include <string.h>
int typing(char);

int main(){
int n,sum = 0;


char sentence[160];
scanf("%[^\n]s" ,sentence);


	for(n = 0;n < strlen(sentence);n++){
		sum = sum + typing(sentence[n]);
	}

printf("%d \n", sum);








return 0;


}
int typing(char letter){
	
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
		
	}


return 0;


}
