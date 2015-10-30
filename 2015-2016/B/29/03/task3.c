#include<stdio.h>
#include<string.h>

int main()
	{
		int a,i,k;
		char cards[13],m;
		printf("Vuvedi Deck::");
		scanf("%s",cards);
		i=strlen(cards);
		for(a=0;a<i;a++)
		{
			if(cards[a]=='T')cards[a]=58;
			if(cards[a]=='J')cards[a]=59;
			if(cards[a]=='Q')cards[a]=60;
			if(cards[a]=='K')cards[a]=61;
			if(cards[a]=='A')cards[a]=62;
		}
		for(a=0;a<i;a++)
		{	
			for(k=0;k<i;k++)

				if(cards[a]<cards[k])
				{
					m=cards[k];
					cards[k]=cards[a];
					cards[a]=m;
				}

		}
		for(a=0;a<i;a++)
		{
			if(cards[a]==58)cards[a]='T';
			if(cards[a]==59)cards[a]='J';
			if(cards[a]==60)cards[a]='Q';
			if(cards[a]==61)cards[a]='K';
			if(cards[a]==62)cards[a]='A';
		}
		printf("%s",cards);
		printf("\n");
		return 0;
	}
