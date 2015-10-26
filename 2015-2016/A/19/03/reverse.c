#include <stdio.h>
#include <string.h>

int main()
{
	char str[200], ch;
	int i,c,l;

	scanf("%[^\n]s", str);
	l=strlen(str)-1;

	for(i=0;i<l;i++)
		{
			ch=str[l];
			for(c=l;c-i>0;c--)
				str[c]=str[c-1];
			str[i]=ch;
		}
	printf("%s\n",str);

return 0;
}
