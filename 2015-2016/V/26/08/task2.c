#include <stdio.h>

int main(){
	int i = 0;
	char a;
	do{
		a = getchar();
		switch(a){
			case 'a': case 'd': case 'g': case 'j': case 'm': case 'p': case 't': case 'w': case ' ': i++; break;
			case 'b': case 'e': case 'h': case 'k': case 'n': case 'q': case 'u': case 'x': i += 2; break;
			case 'c': case 'f': case 'i': case 'l': case 'o': case 'r': case 'v': case 'y': i += 3; break;
			case 's': case 'z': i += 4; break;
		}
	}
	while(a != '\n');
	printf("%d", i);
	return 0;
}
