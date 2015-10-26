#include <stdio.h>
#include <string.h>

int checkCards(char cards[14]);
int valueCard(char card);
int cmpCards(char firstCard, char secondCard);

int main()
{
	char cards[14], i, l, temp;
	printf("A - Ace, K - King, Q - Queen, J - Jester, T - 10, the rest are their respective numbers\n");
	printf("Input your 13 cards: ");
	scanf("%s", cards);
	while(checkCards(cards)!=1)
	{
		printf("Input a valid stack of cards:\n");
		scanf("%s", cards);
	}
	for (i=0; i<13-1; i++)
	{
		for (l=0; l<13-i-1; l++)
		{
			if (cmpCards(cards[l], cards[l+1])==-1)
			{
				temp = cards[l];
				cards[l] = cards[l+1];
				cards[l+1] = temp;
			}
		}
	}
	printf("%s\n", cards);
}
int checkCards(char cards[14]) //Function to check if the input is valid, returns 1 if valid else 0
{
	int i;
	if(strlen(cards)!=13)
		return 0;
		
	for(i=0; i<13; i++)
	{
		if(cards[i]== 'A' || cards[i]== 'K' || cards[i]== 'Q' || cards[i]== 'J' || cards[i]== 'T' || (cards[i]>='2' && cards[i]<='9'))
			return 1;
	}
	return 0;
}
int cmpCards(char firstCard, char secondCard) //Function to compare cards, returns 1 if first is greater, -1 if second is greater, 0 if equal, similarly to strcmp
{
	int firstCardV, secondCardV;
	firstCardV = valueCard(firstCard);
	secondCardV = valueCard(secondCard);
	if(firstCardV > secondCardV)
		return 1;
	else if(firstCardV < secondCardV)
		return -1;
	else 
		return 0;
}
int valueCard(char card) // Function to get a card's value or spot in the hiearchy
{
	int cardValue;
	switch (card) {
	case 'A':
		cardValue=14;
		break;
	case 'K':
		cardValue=13;
		break;
	case 'Q':
		cardValue=12;
		break;
	case 'J':
		cardValue=11;
		break;
	case 'T':
		cardValue=10;
		break;
	default:
		cardValue=card-'0';
		break;
	}
	return cardValue;
}

