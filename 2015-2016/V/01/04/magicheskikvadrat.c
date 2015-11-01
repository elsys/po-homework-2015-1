#include <stdio.h>

int proverka(int n, int chisla[n][n]);
int main()
{
 int i,k,n;
 scanf("%d", &n);
 int chisla[n][n];
 for(i=0;i<n;i++)
 {
  for(k=0;k<n;k++)
  {
    scanf("%d", &chisla[i][k]);
  }
 }
 if(proverka(n,chisla))
 {
  printf("Kvadrata e magicheski \n");
 }
 else
 {
  printf("Kvadrata ne e magicheski \n");
 }
	return 0;
}

int proverka(int n, int chisla[n][n])
{
	int i,k,suma=0,c=0;
	for(i=0;i<n;i++)
	{
		suma=suma+chisla[0][i];
	}
	for(i=0;i<n;i++,c=0)
	{
		for(k=0;k<n;k++)
		{
			c=c+chisla[i][k];
			c=c+chisla[k][i];
			c=c+chisla[k][k];
			c=c+chisla[k][n-(k+1)];
		}
		if(c!=suma*4)
		{
			return 0;
		}
	}
	return 1;
}
