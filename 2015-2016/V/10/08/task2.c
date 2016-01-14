#include <stdio.h>
#include <string.h>

int main()
{
	int i,click=0;
	char text[160];
	scanf("%[^\n]", text);
	for(i=0; i<=strlen(text); i++){	
		switch(text[i]){
			case 'a': case 'd': case 'g': case 'j': case 'm': case 'p': case 't': case 'w': 	case ' ':click++;break;
			case 'b': case 'e': case 'h': case 'k': case 'n': case 'q': case 'u': case 'x': 	click+=2;break;
			case 'c': case 'f': case 'i': case 'l': case 'o': case 'r': case 'v': case 'y': 	click+=3;break;
			case 's': case 'z':click+=4;break;
			
			


		}
		
	}
	printf("%d",click);
	return 0;	
}	
