#include <stdio.h>
int main()
{
	char k;
	int l=0;
		while(k!='\n'){
		k=getchar();
		switch(k)	
		{		
			case 'a': case 'd': case 'g': case 'j': case 'm': case 'p': case 't': case 'w': case ' ': l=l+1; break;
			case 'b': case 'e': case 'h': case 'k': case 'n': case 'q': case 'u': case 'x': l=l+2; break;
			case 'c': case 'f': case 'i': case 'l': case 'o': case 'r': case 'v': case 'y': l=l+3; break;
			case 's': case 'z': l=l+4; break;
			case '\n': break;
		}
	}
	printf("%d\n",l);
	return 0;
}
