#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char karti[13];
    int i=0,k,help;
    printf("vyvedete testeto (Vyvedete T vmesto 10)");
    for(i=0;i<13;i++)
    {
        scanf("%c",&karti[i]);
        switch(karti[i])
        {
            case 'T': karti[i]=100; break;		// T = 10
			case 'J': karti[i]=101; break;
			case 'Q': karti[i]=102; break;
			case 'K': karti[i]=103; break;
			case 'A': karti[i]=104; break;
			default: {
				if(!(karti[i] >= 50 && karti[i] <= 57))
					i--;
				break;
			}
        }
    }
    for(i=0;i<13;i++)
    {
        for(k=0;k<13;k++)
        {
            if(karti[i]<karti[k])
            {
                help=karti[k];
                karti[k]=karti[i];
                karti[i]=help;
            }
        }
    }
    for(i = 0 ; i < 13 ; i++)
        {
		switch(karti[i])
		{
			case 100: karti[i]='T'; break;
			case 101: karti[i]='J'; break;
			case 102: karti[i]='Q'; break;
			case 103: karti[i]='K'; break;
			case 104: karti[i]='A'; break;
		}
		printf("%c ",karti[i]);
	    }
}
