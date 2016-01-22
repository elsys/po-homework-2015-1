#include <stdio.h>
#include <string.h>
#define LETTERS 30
#define MAX_SYMBOLS 160
int main()
{
	char alphabet[LETTERS]="abcdefghijklmnopqrstuvwxyz";
	int position[LETTERS];
	int letter=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<3;j++,letter++)
			position[letter]=j+1;
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<4;j++,letter++)
		{
			if(alphabet[letter]=='w') j=0;
			position[letter]=j+1;
		}
	}
	
	char text[MAX_SYMBOLS];
	int sum=0;
	fgets(text,160,stdin);
	for(int i=0;i<strlen(text);i++)
	{
		if(text[i]==' ') sum=sum+1;
		else
		{
			for(int j=0;j<26;j++)
				if(text[i]==alphabet[j]) sum=sum+position[j];
		}
	}
	printf("%d",sum);
	return 0;
}
