#include <stdio.h>


int main()
{
	char c[13];
	int i,l,p;
	


	for(i=0;i<13;i++)
	{
		scanf("%c", &c[i]);
		if(c[i]=='T') c[i] = 10;
		else if(c[i]=='J') c[i] = 11;
		else if(c[i]=='Q') c[i] = 12;
		else if(c[i]=='K') c[i] = 13;
		else if(c[i]=='A') c[i] = 14;
	}
	



	for(i=13;i!=0;i--)
	{
		for(l=0;l<i;l++)
		{
			if(c[l]>c[l+1])
			p=c[l];
			c[l]=c[l+1];
			c[l+1]=p;	
		}
	}
	


	for(i=0;i<13;i++)
	{
		if(c[i]==10) c[i] = 'T';
		else if(c[i]==11) c[i] = 'J';
		else if(c[i]==12) c[i] = 'Q';
		else if(c[i]==13) c[i] = 'K';
		else if(c[i]==14) c[i] = 'A';
	}
	for(i=0;i<13;i++)
	{
		printf("%c\n", c[i]);
	}
}
