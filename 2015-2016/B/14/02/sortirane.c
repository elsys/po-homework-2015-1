#include <stdio.h>

int main()
{

int chisla[1000];
int c=0,i,d,t,k,j;
 while (c<1000)
        {
  printf("\n Vuvedi cislo: ");
  scanf("%d", &chisla[c]);
  if (chisla[c] == 42)
  {
        break;
  }
  c++;
        }
for(k=0; k<c; ++k)
        for(j=c-1; j>k;j--){
                if(chisla[j-1] > chisla[j]){
                        t = chisla[j-1];
                        chisla[j-1] = chisla[j];
                        chisla[j] = t;
                }
        }
        for(t=0; t<c; t++)

        printf(" %d", chisla[t]);

        return 0;
}
