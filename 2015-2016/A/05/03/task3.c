#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int findValue(char deck)
{
int n=0;
if (deck=='2')
n=2;

else if(deck== '3')
n=3;

else if(deck== '4')
n=4;

else if(deck== '5')
n=5;

else if(deck== '6')
n=6;

else if(deck== '7')
n=7;

else if(deck== '8')
n=8;

else if(deck== '9')
n=9;

else if(deck== 'T')
n=10;

else if(deck== 'J')
n=11;

else if(deck== 'Q')
n=12;

else if(deck== 'K')
n=13;

else if(deck== 'A')
n=15;
else
n=0;

return n;
}

int main()
{
	int counter=0,counter2,test,lenght;
	char deck[13],cards[13]="23456789TJQKA",temp;
	printf("Enter cards : ");
	scanf("%s",deck);
	lenght=strlen(deck);
	for(counter=0;counter<strlen(deck)-1;counter++)
	{
		test=0;
		for(counter2=0;counter2<strlen(cards)-1;counter2++)
		{
			if(deck[counter]==cards[counter2])
				test=1;

		}
		if(test==0 )
		{
			printf("invalid deck");
			return 0;
		}
	}
	for(counter=0; counter<strlen(deck); counter++)
	{
	        for(counter2=0; counter2<strlen(deck)-1; counter2++)
	            {
	            if(findValue(deck[counter2])>findValue(deck[counter2+1]))
	                {
	                    temp = deck[counter2+1];
	                    deck[counter2+1] = deck[counter2];
	                    deck[counter2] = temp;
	                }
	            }
	}
	for(counter=0;counter<lenght;counter++)
        {
         if(deck[counter]>='2' && deck[counter]<='9' || deck[counter]=='A' || deck[counter]=='K' || deck[counter]=='Q' || deck[counter]=='J' || deck[counter]=='T')
          printf("%c",deck[counter]);
        }
}
