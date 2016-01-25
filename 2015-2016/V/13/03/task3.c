#include <stdio.h>
#include <string.h>
char s, cards[13];
void sort(int n);

int main()
{
    scanf("%s",cards);
    sort(13);
    for(int i=0;i<13;i++)
    {
    	printf("%c",cards[i]);
    }
    return 0;
}

void sort(int n)
{
    int i, j;
    for(i=0;i<n;i++)
    {
        while(cards[i]>='0' && cards[i]<='9') i++;
        switch(cards[i])
        {
            case 'T': cards[i]=110; break;
            case 'J': cards[i]=112; break;
            case 'Q': cards[i]=113; break;
            case 'K': cards[i]=114; break;
            case 'A': cards[i]=115; break;
        }
    }

    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(cards[j]>cards[j+1])
            {
                s = cards[j];
                cards[j] = cards[j+1];
                cards[j+1] = s;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        while(cards[i]>='0' && cards[i]<='9') i++;
        switch(cards[i])
        {
            case 110: cards[i]='T'; break;
            case 112: cards[i]='J'; break;
            case 113: cards[i]='Q'; break;
            case 114: cards[i]='K'; break;
            case 115: cards[i]='A'; break;
        }
    }
}
