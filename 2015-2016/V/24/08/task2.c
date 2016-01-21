#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0,button = 0;
	char txt[160];
	scanf("%[^\n]s", txt);
	while(i<=strlen(txt))
	{
		switch(txt[i])
		{
			case 'a': case 'd': case 'g': case 'j': case'm': case 'p': case 't': case 'w': case ' ': button++; break;
			case 'b': case 'e': case 'h': case 'k': case 'n': case 'q': case 'u': case 'x': button = button + 2; break;
			case 'c': case 'f': case 'i': case 'l': case 'o': case 'r': case 'v': case 'y': button = button + 3; break;
			case 's': case 'z': button = button + 4; break;
				
		}i++;
	}
	printf("%d \n", button);
return 0;
}		
