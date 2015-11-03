#include <stdio.h>

int Sort(char);

int main()
{
    char teste[14], d;
    int n,y;

    scanf("%s", teste);

    for(n=1; n<13; n++)
    {
        for(y=0; y<13-n; y++)
        {
            if(Sort(teste[y]) > Sort(teste[y+1]))
            {
                d=teste[y];
                teste[y]=teste[y+1];
                teste[y+1]=d;
            }
        }
    }
    printf("%s", teste);
    return 0;
}
int Sort(char c)
{
 switch(c)
 {
  case '2': return 2;
  case '3': return 3;
  case '4': return 4;
  case '5': return 5;
  case '6': return 6;
  case '7': return 7;
  case '8': return 8;
  case '9': return 9;
  case 'T': return 10;
  case 'J': return 11;
  case 'Q': return 12;
  case 'K': return 13;
  case 'A': return 14;
  default: return 1;
 }
}
