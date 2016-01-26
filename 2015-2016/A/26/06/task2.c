#include <stdio.h>
#include <string.h>

int main()
{
	int c, sum=0, len, i;
	char n[160], character;

	while((character=getchar())!='\n')
	{
	if(character>='a' && character<='z')
		{
		n[i]=character;
		i++;
		}
	else if(character==' ')
		{
		n[i]=character;
		i++;
		}
	else
	return 0;
	}

	len=strlen(n);
	
	for(c=0; c<len; c++)
	{
		if(n[c]=='a' || n[c]=='d' || n[c]=='g' || n[c]=='j' || n[c]=='m' || n[c]=='p' || n[c]=='t' || n[c]=='w' || n[c]==' ')
		{	
			sum=sum+1;

		}
		if(n[c]=='b' || n[c]=='e' || n[c]=='h' || n[c]=='k' || n[c]=='n' || n[c]=='q' || n[c]=='u' || n[c]=='x')
		{
			sum=sum+2;
		}
		if(n[c]=='c' || n[c]=='f' || n[c]=='i' || n[c]=='l' || n[c]=='o' || n[c]=='r' || n[c]=='v' || n[c]=='y')
		{
			sum=sum+3;
		}
		if(n[c]=='s' || n[c]=='z')
		{
			sum=sum+4;
		}
	}
	
	printf("%d", sum);

	return 0;
}
