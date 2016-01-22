#include <stdio.h>
#include <string.h>
void create_letter_distribution_diagram()
{
	char ch;
	int c, LettersCount[26][2]={{0}},tmp,tmp2,i,l;//[0]-letters,[1]-count
	for(c=0;c<26;c++)
	{
		LettersCount[c][0]=c;
		
	}
	
	do
	{
		ch=getchar();
		if(ch>='A' && ch<='Z')
		{
			LettersCount[ch-'A'][1]++;
		}
		else if(ch>='a' && ch<='z')
		{
			LettersCount[ch-'a'][1]++;
		}
	}while(ch!=EOF);
	for(i=0;i<(26-1);i++)
	{
		for(l=0;l<26-i-1;l++)
		{
			if(LettersCount[l][1]<LettersCount[l+1][1])
			{
				tmp = LettersCount[l][0];
				tmp2 = LettersCount[l][1];
				LettersCount[l][0] = LettersCount[l+1][0];
				LettersCount[l+1][0] = tmp;
				LettersCount[l][1] = LettersCount[l+1][1];
				LettersCount[l+1][1] = tmp2;
			}
			if(LettersCount[l][0]>LettersCount[l+1][0] && LettersCount[l][1]==LettersCount[l+1][1])
			{
				tmp = LettersCount[l][0];
				tmp2 = LettersCount[l][1];
				LettersCount[l][0] = LettersCount[l+1][0];
				LettersCount[l+1][0] = tmp;
				LettersCount[l][1] = LettersCount[l+1][1];
				LettersCount[l+1][1] = tmp2;
			}
		}
	}
	for(i=0;i<=25;i++)
	{
		printf("%c: %d ",LettersCount[i][0]+'a',LettersCount[i][1]);
			if(i==25)
			{
				printf("%c: %d",LettersCount[i][0]+'a',LettersCount[i][1]);
			}
	}

}
int main()
{
	create_letter_distribution_diagram ();
	return 0;
}
