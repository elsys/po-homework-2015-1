#include <stdio.h>
char s, cards[13];
int sort(int n);

int main()
{
    gets(cards);
    sort(13);
    puts(cards);
    return 0;
}

int sort(int n)
{
    int i, j;
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
}
