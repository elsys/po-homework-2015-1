#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char script[160];
	scanf("[^\n]", script);
	int button = 0;
	for(int i = 0;i <= strlen(script); i++) {
		switch(script[i])
		{
			case 'a': case 'd': case 'g': case 'j': case 'm': case'p': case 't': case 'w': case ' ': button++; break;
			case 'b': case 'e':case 'h': case 'k': case 'n': case 'q': case 'u': case 'x': button+= 2; break;
			case 'c': case 'f': case 'i': case 'l': case 'o': case 'r': case 'v': case 'y': button+= 3; break;
			case 's': case 'z': button+= 4; break;
		}
	}
	printf("\n%d",button);
	return 0;
}
