#include <stdio.h>

int main()
{

	char s[100];

	gets(s);
	puts(s);

	char n=0;

	while(s[n])n++;

	char l;

	for (l=0;l<n/2;l++)
	{

		if (!s[l]==s[n-1-l])
		{
			break;
		}
	}
	if(l==n) return 0;
	else return 1;
}