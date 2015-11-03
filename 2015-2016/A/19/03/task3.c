#include <stdio.h>
#include <string.h>

int main() /*ot 2 do A*/
{
	char deck[100],swap;
	int i,d,l;
	printf("\n13 cards deck.\nNote: There can be only one A,K,Q,J or T.\nEnter the cards: ");
	scanf("%[^\n]s", deck);
	l=strlen(deck)-1;

	for(i=0;i<l;i++)
	  {
		    for(d=0;d<l-i;d++)
		    {
		      if(deck[d]>deck[d+1])
		      {
			swap=deck[d];
			deck[d]=deck[d+1];
			deck[d+1]=swap;
		      }
		    }
	  }
	swap=deck[l]; deck[l]=deck[l-4]; deck[l-4]=swap;
	swap=deck[l-1]; deck[l-1]=deck[l-2]; deck[l-2]=swap;

printf("Cards in ascending order:%s\n\n", deck);

return 0;
}
