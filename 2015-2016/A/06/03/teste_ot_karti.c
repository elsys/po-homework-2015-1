#include <stdio.h>
#include <stdlib.h>
char deck[14];
int a,b,c,d;
a=0;
b=0;
c=0;
d=0;
void main(void)
{
	while(a<13)
    {
        a=a+1;
        scanf("%c\n", &deck[a]);
    }
	while(a<13)
    {
        a=a+1;
        int m = (int)(deck[a]);

		if ((m > 49) && (m < 58))
		{
			for (b = a + 1; b < 13; b++)
      		{
				int e = (int)(deck[b]);
				if ((e > 49) && (e < 58))
				{
				    if (m > e)
				    {
				        a =  deck[a
				        ];
				        deck[a] = deck[b];
				        deck[b] = c;
				    }
				}
        	}
		}
		else
		{
			char new = deck[a];

			if (deck[a]=='T')
			{
				new = deck[8];
			}
			else if (deck[a]=='J')
			{
				new = deck[9];
			}
			else if (deck[a]=='Q')
			{
				new = deck[10];
			}
			else if (deck[a]=='K')
			{
				new = deck[11];
			}
			else if (deck[a]=='A')
			{
				new = deck[12];
			}

		}
    }
	while(d<13)
    {
        d=d+1;
        printf("%c", deck[d]);
    }
}
