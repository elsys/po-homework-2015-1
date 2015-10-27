#include <stdio.h>
#include <string.h>

int main()
{
	char cards[14],swap;
	int i,d,l;
	printf("Enter 13 cards: ");
	scanf("%s",cards);
	l=strlen(cards)-1;

    while(strlen(cards)!=13)
    {
        printf("Cards have to be 13: ");
        scanf("%s", cards);
    }

	for(i=0;i<l;i++)
    {
        for(d=0;d<l-i;d++)
        {
            if(cards[d]>cards[d+1])
            {
                swap=cards[d];
                cards[d]=cards[d+1];
                cards[d+1]=swap;
            }
        }
    }
    printf("Cards in ascending order:%s", cards);
    return 0;
}
