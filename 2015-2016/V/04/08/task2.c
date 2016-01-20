#include<stdio.h>

int main() {

	int counter = 0;
	char c;
	while( c != '\n') {

		c = getchar();
		switch(c) {
			case 'a': counter = counter + 1; break;
			case 'b': counter = counter + 2; break;
			case 'c': counter = counter + 3; break;
			case 'd': counter = counter + 1; break;
			case 'e': counter = counter + 2; break;
			case 'f': counter = counter + 3; break;
			case 'g': counter = counter + 1; break;
			case 'h': counter = counter + 2; break;
			case 'i': counter = counter + 3; break;
			case 'j': counter = counter + 1; break;
			case 'k': counter = counter + 2; break;
			case 'l': counter = counter + 3; break;
			case 'm': counter = counter + 1; break;
			case 'n': counter = counter + 2; break;
			case 'o': counter = counter + 3; break;
			case 'p': counter = counter + 1; break;
			case 'q': counter = counter + 2; break;
			case 'r': counter = counter + 3; break;
			case 's': counter = counter + 4; break;
			case 't': counter = counter + 1; break;
			case 'u': counter = counter + 2; break;
			case 'v': counter = counter + 3; break;
			case 'w': counter = counter + 1; break;
			case 'x': counter = counter + 2; break;
			case 'y': counter = counter + 3; break;
			case 'z': counter = counter + 4; break;
			case ' ': counter = counter + 1; break;
			case '\n': break;
			default: return -666;
		}
	}
	
	printf("%d\n" , counter);
	return 0;
}
