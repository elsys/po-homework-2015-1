#include <stdio.h>
#include <string.h>

int create_letter_distribution_diagram();

int main()
{
	create_letter_distribution_diagram();
	return 0;
}

int create_letter_distribution_diagram()
{
	int i=0, j=0, n=0;
	int p=0;
	int num[26];
	char s;
	char text[10000], lett[26]="abcdefghijklmnopqrstuvwxyz";
	while(1)
	{
		s=getchar();
		if(s==EOF)
		{
			break;
		}
		else
		{
			if (s>='A' && s<='Z')
			{
				s=s-('A'-'a');
			}
			text[i]=s;
			i++;
		}
		
	}
	n=strlen(text);
	for(i=0; i<n; i++)
	{
		
		for(j=0; j<26; j++)		
		{
			if(text[i]==lett[j])
			{
				num[j]++;
			}
		}
	}
	while(1)
	{
		p=0;
		for(i=0; i<26; i++)
		{
			if(num[i]<num[i+1])
			{
				num[i]=num[i]+num[i+1];
				num[i+1]=num[i]-num[i+1];
				num[i]=num[i]-num[i+1];

				lett[i]=lett[i]+lett[i+1];
				lett[i+1]=lett[i]-lett[i+1];
				lett[i]=lett[i]-lett[i+1];
				p=1;
			}
		}
		if(p==0)
		{
			break;
		}
	}
	for(i=0; i<26; i++)
	{
		printf("%c: %d\n",lett[i],num[i]);
	}
	return 0;
}