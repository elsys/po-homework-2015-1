#include <stdio.h>

int main()
{
	
	char a=0;
	int m=0;
	while(a!='\n')
	{
		 a=fgetc(stdin);
		switch(a)
		{
			case 'a': case 'd': case 'g': case 'j': case 'm': case 'p': case 't': case 'w': case ' ': m+=1; break;
			case 'b': case 'e': case 'h': case 'k': case 'n': case 'q': case 'u': case 'x': m+=2; break;
			case 'c': case 'f': case 'i': case 'l': case 'o': case 'r': case 'v': case 'y': m+=3; break;
			case 's': case 'z': m+=4; break;
			case '\n': break;
		}

		

	}
	printf("%d\n", m);



	return 0;
}