#include <stdio.h>

int main() {
	
	int i;
	char a;
	while (a != '\n') {
		a = getchar();
		switch(a){
			case 'a': case 'd': case 'g': case 'j': case 'm': case 'p': case 't': case 'w': case ' ': i++; break;
			case 'b': case 'e': case 'h': case 'k': case 'n': case 'q': case 'u': case 'x': i+=2; break;
			case 'c': case 'f': case 'i': case 'l': case 'o': case 'r': case 'v': case 'y': i+=3; break;
			case 's': case 'z': i+=4; break;
		}
	}
	printf ("%d", i);
	return 0;
}
