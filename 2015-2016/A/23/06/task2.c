#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char s[100];
	int i=0,l,numl;
	fgets(s,100,stdin);
	numl=strlen(s);
	for(l=0;l<numl;l++)
	switch(s[l])
	{
		case 'a' : i=i+1;
		break;
		case 'b' : i=i+2;
		break;
		case 'c' : i=i+3;
		break;

		case 'd' : i=i+1;
		break;
		case 'e' : i=i+2;
		break;
		case 'f' : i=i+3;
		break;

		case 'g' : i=i+1;
		break;
		case 'h' : i=i+2;
		break;
		case 'i' : i=i+3;
		break;

		case 'j' : i=i+1;
		break;
		case 'k' : i=i+2;
		break;
		case 'l' : i=i+3;
		break;

		case 'm' : i=i+1;
		break;
		case 'n' : i=i+2;
		break;
		case 'o' : i=i+3;
		break;

		case 'p' : i=i+1;
		break;
		case 'q' : i=i+2;
		break;
		case 'r' : i=i+3;
		break;
		case 's' : i=i+4;
		break;

		case 't' : i=i+1;
		break;
		case 'u' : i=i+2;
		break;
		case 'v' : i=i+3;
		break;

		case 'w' : i=i+1;
		break;
		case 'x' : i=i+2;
		break;
		case 'y' : i=i+3;
		break;
		case 'z' : i=i+4;
		break;

		case ' ' : i=i+1;
		break;
	}
	printf("\n%d\n",i);
	return 0;
}

