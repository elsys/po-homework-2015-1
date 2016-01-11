#include<stdio.h>
#include<string.h>

void ​create_letter_distribution_diagram(char sentence[10000])
{
	int i,k,length,br[26];
	char a,letter[26];
	length=strlen(sentence);
	a = 97;
	for(i = 0; i < 26; i++)
		br[i] = 0;
	for(i = 0; i < 26; i++)
	{
		letter[i] = a;
		a++;
	}
	for(i = 0; i < 26; i++)
	{
		for(k = 0; k < length; k++)
		{
			if(sentence[k] == letter[i])
				br[i]++;
		}
		printf("%c-%d\n",letter[i],br[i]);
	}
	
}

int main()
{
	char sentence[10000];
	getc(sentence[10000]);
	create_letter_distribution_diagram(sentence[10000]);
	return 0;
}

