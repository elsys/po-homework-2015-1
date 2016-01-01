#include <stdio.h>

int main() 
{
	int i = 0, l;
	char card[14], enter;
	for(i = 0 ; i < 13 ; i++)
    {
		scanf("%c",&card[i]);
		scanf("%c",&enter);
		switch(card[i])
		{
			case 'T': card[i]=58; break;
			case 'J': card[i]=59; break;
			case 'Q': card[i]=60; break;
			case 'K': card[i]=61; break;
			case 'A': card[i]=62; break;
		}
	}
	for(i = 0 ; i < 13 ; i++)
	{
		for(l = 0; l < 13 ; l++)
        {
			if(card[i]<card[l])
			{
				int swap = card[l];
				card[l] = card[i];
				card[i] = swap;
			}
		}
	}
	for(i = 0 ; i < 13 ; i++)
    {
		switch(card[i])
		{
			case 58: card[i]='T'; break;
			case 59: card[i]='J'; break;
			case 60: card[i]='Q'; break;
			case 61: card[i]='K'; break;
			case 62: card[i]='A'; break;
		}
		printf("%c ", card[i]);
	}
	return 0;
}
