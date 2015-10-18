#include <stdio.h>
#include <stdlib.h>
int main()
{int i=0,s,l=0 ;
char c[10000];
gets(c);
s=sizeof(c);
while(l<=s)
	{
		if(c[l-3]=='S' && c[l-2]=='T' && c[l-1]=='O' && c[l]=='P')
		{
			for(i=0;i<l;i++)
			{
				if(c[i]>='a' && c[i]<='z')
			{
				c[i]=c[i]-32;
			}
		printf("\n %c",c[i]);
			}
		}
	l++;
	}
return 0;
}
