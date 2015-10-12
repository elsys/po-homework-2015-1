#include <stdio.h>
#include <stdlib.h>

char deck[14];
int i,j,a,f;

void main ()
{
	for (i = 0; i < 13; i++)
	{
		scanf("%c\n", &deck[i]);
	}
	for (i = 0; i < 13; i ++)
	{
	int m = (int)(deck[i]);

		if ((m > 49) && (m < 58))
		{
			for (j = i + 1; j < 13; j++)
      		{
				int e = (int)(deck[j]);
				if ((e > 49) && (e < 58))
				{
				    if (m > e)
				    {
				        a =  deck[i];
				        deck[i] = deck[j];
				        deck[j] = a;
				    }
				}
        	}
		}
		else
		{	
			char new = deck[i];

			if (deck[i]=='T') 
			{
				new = deck[8];
			}
			else if (deck[i]=='J')
			{
				new = deck[9];
			}
			else if (deck[i]=='Q')
			{
				new = deck[10];
			}
			else if (deck[i]=='K')
			{
				new = deck[11];
			}
			else if (deck[i]=='A')
			{
				new = deck[12];
			}

		}
	}
	for (f = 0; f < 13; f++)
	{
		printf("%c ", deck[f]);
	}
}


//0 1 2 3 4 5 6 7 8 9 10 11 12 
//2 3 4 5 6 7 8 9 T J Q  K   A
