#include <stdio.h>
#include <string.h>

int taps(char);

int main(){

char sentence[160];
int counter=0,sum = 0;

scanf("%[^\n]s",sentence);

for(;counter<strlen(sentence);counter++){


	sum = sum + taps(sentence[counter]);

}

	printf("%d\n",sum);

return 0;
}

int taps(char letter){

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
