#include <stdio.h>

int main() 
{
	char deck[14];
	for(i = 0 ; i < 13 ; i++)
    {
		scanf("%c%*c",&deck[i]);
		switch(deck[i])
		{
			case 'T': deck[i]='A'+1; break;
			case 'J': deck[i]='A'+2; break;
			case 'Q': deck[i]='A'+3; break;
			case 'K': deck[i]='A'+4; break;
			case 'A': deck[i]='A'+5; break;
		}
	}
	for(int i = 0 ; i < 13 ; i++)
	{
		for(int j = 0; j < 13 ; j++)
        {
			if(deck[i]<deck[j])
			{
				int swap = deck[j];
				deck[j] = deck[i];
				deck[j] = swap;
			}
		}
	}
	for(int i = 0 ; i < 13 ; i++)
    {
		switch(deck[i])
		{
			case 'A'+1: deck[i]='T'; break;
			case 'A'+2: deck[i]='J'; break;
			case 'A'+3: deck[i]='Q'; break;
			case 'A'+4: deck[i]='K'; break;
			case 'A'+5: deck[i]='A'; break;
		}
		printf("%c ", deck[i]);
	}
	return 0;
}