#include <stdio.h>
#include <string.h>


int main()
{
	char this;
	int count, deck[13], temp, i;


	for(count=0; count<13; count++)
	{
		scanf("%c", &this);

		if(this >= '2' && this <= '9')
		{
			deck[count] = this - '0';
		}
		else
		{
			switch(this)
			{
				case 'T': deck[count] = 10; break;
				case 'J': deck[count] = 11; break;
				case 'Q': deck[count] = 12; break;
				case 'K': deck[count] = 13; break;
				case 'A': deck[count] = 14; break;
			} 
		}
	}
	printf("\n");

	

		for(count=0; count<13; ++count)
		{
        	for(i=12; i>count; --i)
        	{


                if(deck[i-1] > deck[i])
                {
                        temp = deck[i-1];
                        deck[i-1] = deck[i];
                        deck[i] = temp;
                }
        	}
        }
	

		for(count=0; count<13; count++)
		{
			if(deck[count] >= 2 && deck[count] <= 9)
			{
				printf("%d", deck[count]);
			}
			else
			{
				switch(deck[count])
				{
					case 10: printf("T"); break;
					case 11: printf("J"); break;
					case 12: printf("Q"); break;
					case 13: printf("K"); break;
					case 14: printf("A"); break;
					default: break;
				}
			}
			printf("\n");
		}


	return 0;
}