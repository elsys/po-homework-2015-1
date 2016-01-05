#include <stdio.h>

int main()
{
	int br_klikove=0;
	char n;
	do
	{
		n=getchar();
		switch(n)	// Първоначално смятах да използвам целочислено деление, за да разделя буквите 
		{			// на първи, втори и трети, но клавишите с по четири букви развалиха тази идея.
			case 'a': case 'd': case 'g': case 'j': case 'm': case 'p': case 't': case 'w': case ' ': br_klikove+=1; break;
			case 'b': case 'e': case 'h': case 'k': case 'n': case 'q': case 'u': case 'x': br_klikove+=2; break;
			case 'c': case 'f': case 'i': case 'l': case 'o': case 'r': case 'v': case 'y': br_klikove+=3; break;
			case 's': case 'z': br_klikove+=4; break;
			case '\n': break;
			default: return -666;
		}
	}
	while(n!='\n');
	//printf("Tozi tekst se vavezda s ")
	printf("%d",br_klikove);
	//printf(" klika.\n");
	return 0;
}