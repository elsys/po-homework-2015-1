#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Numbervalue(char c)
{
	int s=0;
	switch(c)
	{
	case 'a':
	s=1;
	break;
	case 'b':
	s=2;
	break;
	case 'c':
	s=3;
	break;
	case 'd':
	s=1;
	break;
	case 'e':
	s=2;
	break;
	case 'f':
	s=3;
	break;
	case 'g':
	s=1;
	break;
	case 'h':
	s=2;
	break;
	case 'i':
	s=3;
	break;
	case 'j':
	s=1;
	break;
	case 'k':
	s=2;
	break;
	case 'l':
	s=3;
	break;
	case 'm':
	s=1;
	break;
	case 'n':
	s=2;
	break;
	case 'o':
	s=3;
	break;
	case 'p':
	s=1;
	break;
	case 'q':
	s=2;
	break;
	case 'r':
	s=3;
	break;
	case 's':
	s=4;
	break;
	case 't':
	s=1;
	break;
	case 'u':
	s=2;
	break;
	case 'v':
	s=3;
	break;
	case 'w':
	s=1;
	break;
	case 'x':
	s=2;
	break;
	case 'y':
	s=3;
	break;
	case 'z':
	s=4;
	break;
	case ' ':
	s=1;
	break;
	default:
	s=0;
	}
	return s;
}

int main()
{
	char sentence[160],ch;
	int i=0,s=0;
	while((ch=getchar())!='\n')
	{
		sentence[i]=ch;
		i++;
	}
	for(i=0;i<strlen(sentence);i++)
	{
		s+=Numbervalue(sentence[i]);
	}
	printf("\n%d",s);
	return 1;
}
