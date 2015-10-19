#include <stdio.h>
#include <string.h>

void main()
{
	int a=0,l;
	char s,izr[1000];
	while(a==0)
	{
		while(a==0 && s!='.')
		{
			s=getchar();
			if(s<123 && s>96)
				s-=32;
			l=strlen(izr);
			izr[l]=s;
			izr[l+1]='\0';
			l++;
			if(s=='P')
				if(izr[l-2]=='O' && izr[l-3]=='T' && izr[l-4]=='S')
					a=1;
		}
		s='X';
		printf("%s\n",izr);
		izr[0]='\0';
	}
}