#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int create_letter_distribution_diagram();

int create_letter_distribution_diagram()
{
	char c;
	int l,order[26]={0},sorted[26],tmp,tmp2,i,y;
	while(1)
	{
		c=getchar();
		if(c==EOF)
		{
			break;
		}
		if(c>='a' && c<='z')
		{
			order[c-'a']++;
		}
		if(c>='A' && c<='Z')
		{
			order[c-'A']++;
		}
	}
	for(i=0;i<26;i++)
	{
		sorted[i]=i;
	}
	for(i=0;i<26;i++)
	{

		for(y=0;y<26-i;y++)
		{
			if(order[y]<order[y+1])
			{
				tmp=sorted[y];
				tmp2=order[y];
				sorted[y]=sorted[y+1];
				sorted[y+1]=tmp;
				order[y]=order[y+1];
				order[y+1]=tmp2;
			}
			if(sorted[y]>sorted[y+1] && order[y]==order[y+1])
			{
				tmp=sorted[y];
				tmp2=order[y];
				sorted[y]=sorted[y+1];
				sorted[y+1]=tmp;
				order[y]=order[y+1];
				order[y+1]=tmp2;
			}
		}
	}
	for(l=0;l<26;l++)
	{
		printf("\n%c:%d",sorted[l]+'a',order[l]);
	}
	return 0;
}
int main()
{
	create_letter_distribution_diagram();
	return 0;
}
