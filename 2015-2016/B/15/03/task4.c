#include <stdio.h>
#include <string.h>

int main()
{
	char s[15];
	int l,i,res=0,I=1,II=2,III=3,IV=4,V=5,IX=9,X=10,IL=49,L=50,IC=99,C=100;
	scanf("%s",s);
	l=strlen(s);

	for(i=0;i<=l;i++)
	{
		if(s[i]=='I' && s[i-1]!='I' && s[i+1]==0)
        res=res+I;
		if(s[i]=='I' && s[i-1]!='I' && s[i+1]=='I' && s[i+2]==0)
        res=res+II;
		if(s[i]=='I' && s[i-1]!='I' && s[i+1]=='I' && s[i+2]=='I' && s[i+3]==0)
		res=res+III;
		if(s[i]=='V' && s[i-1]!='I')
		res=res+V;
		if(s[i]=='V' && s[i-1]=='I')
		res=res+IV;
		if(s[i]=='X' && s[i-1]!='I')
		res=res+X;
		if(s[i]=='X' && s[i-1]=='I')
		res=res+IX;
        if(s[i]=='L' && s[i-1]!='I')
        res=res+L;
		if(s[i]=='L' && s[i-1]=='I')
		res=res+IL;
		if(s[i]=='C' && s[i-1]!='I')
		res=res+C;
		if(s[i]=='C' && s[i-1]=='I')
		res=res+IC;

	}
	printf("%d", res);
	return 0;
}
