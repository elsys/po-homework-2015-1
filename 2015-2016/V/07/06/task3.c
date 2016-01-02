#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void create_letter_distribution_diagram();	//в условието пишеше въвеждането и извеждането да стават във функцията

int main()
{
	create_letter_distribution_diagram();
	return 0;
}

void create_letter_distribution_diagram()
{
	int br_bukvi[26],i=-1,j,max=0;
	char *text;
	text=malloc(1);
	do
	{
		i++;
		text=realloc(text,(i+1)*100*sizeof(char));
		for(j=0;j<100;j++)
		{
			text[i*100+j]=getchar();
			if(text[i*100+j]=='\n')
				break;
		}
	}while(text[i*100+j]!='\n');
	j=i*100+j;
	for(i=0;i<26;i++)
		br_bukvi[i]=0;
	for(i=0;i<j;i++)
	{
		if(text[i]>64 && text[i]<91)
			br_bukvi[text[i]-65]++;
		if(text[i]>96 && text[i]<123)
			br_bukvi[text[i]-97]++;
	}
	free(text);
	for(i=0;i<26;i++)
		if(br_bukvi[i]>max)
			max=br_bukvi[i];
	while(max>=0)
	{
		for(i=0;i<26;i++)
			if(br_bukvi[i]==max)
				printf("%c: %d\n",i+97,br_bukvi[i]);
		max--;
	}
}