#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int create_letter_distribution_diagram();

void find_frequency()
{
	int c=0;
	int count[100];
	char s[100];
	while(s[c]!='\0')
	{
		if(s[c]>='a' && s[c]<='z')
		{
			count[s[c]-'a']++;
		}
		if(s[c]>='A' && s[c]<='Z')
		{
			count[s[c]-'A']++;
		}
		c++;
	}
}
int create_letter_distribution_diagram()
{
	char string;
	int c,order[26]={0},sorted[26],tmp,i,y;
	scanf("%s",&string);
	find_frequency(string,order);
	for(i=0;i<26;i++)
	{
		sorted[i]=i;
	}
	for(i=0;i<26;i++)
	{

		for(y=0;y<26-i;y++)
		{
			if(order[sorted[y]]<order[sorted[y+1]])
			{
				tmp=sorted[y];
				sorted[y]=sorted[y+1];
				sorted[y+1]=tmp;
			}
		}
	}
	for(c=0;c<26;c++)
	{
		printf("\n%c:%d",sorted[c]+'a',order[sorted[c]]);
	}
	return 0;
}
int main()
{
	create_letter_distribution_diagram();
	return 0;
}
