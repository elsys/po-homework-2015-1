#include <stdio.h>
#include <string.h>

int main() {
	char message[160]; int i=0;
	scanf("%[^\n]", message);
	int button_press=0; 
	for( i=0 ; i<=strlen(message) ; i++ ) {
		switch(message[i]) {
			case 'a': case 'd': case 'g': case 'j': case 'm': case 'p': case 't': case 'w': button_press+=1; break;
			case 'b': case 'e': case 'h': case 'k': case 'n': case 'q': case 'u': case 'x': button_press+=2; break;
			case 'c': case 'f': case 'i': case 'l': case 'o': case 'r': case 'v': case 'y': button_press+=3; break;
			case 's': case 'z': button_press+=4; break;
			case ' ':  button_press++;
		}
	}	

		printf("%d", button_press);
		return 0;
}
