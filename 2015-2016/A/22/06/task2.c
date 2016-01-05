#include <stdio.h>
#include <string.h>

int lett_to_num(char);

int main ()
{
	int n=0, temp=0;
	int num=0;
	char c;
	char mess[160];
	while (c!='\n')
	{
		scanf("%c", &c);
		mess[n]=c;
		n++;
	}
	n=strlen(mess);
	for (n=n-1; n>=0; n--)
	{
		temp=lett_to_num(mess[n]);
		num+=temp;
	}
	printf("%d\n", num);
	return 0;
}

int lett_to_num (char lett)
{
	switch (lett)
	{
		case ' ':
			return 1;
			break;
		case 'a':
			return 1;
			break;
		case 'b':
			return 2;
			break;
		case 'c':
			return 3;
			break;
		case 'd':
			return 1;
			break;
		case 'e':
			return 2;
			break;
		case 'f':
			return 3;
			break;
		case 'g':
			return 1;
			break;
		case 'h':
			return 2;
			break;
		case 'i':
			return 3;
			break;
		case 'j':
			return 1;
			break;
		case 'k':
			return 2;
			break;
		case 'l':
			return 3;
			break;
		case 'm':
			return 1;
			break;
		case 'n':
			return 2;
			break;
		case 'o':
			return 3;
			break;
		case 'p':
			return 1;
			break;
		case 'q':
			return 2;
			break;
		case 'r':
			return 3;
			break;
		case 's':
			return 4;
			break;
		case 't':
			return 1;
			break;
		case 'u':
			return 2;
			break;
		case 'v':
			return 3;
			break;
		case 'w':
			return 1;
			break;
		case 'x':
			return 2;
			break;
		case 'y':
			return 3;
			break;
		case 'z':
			return 4;
			break;
	}
	return 0;
}