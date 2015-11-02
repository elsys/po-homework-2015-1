#include <stdio.h>
int main()
{
	int cifra,chislo,neshto,broi;
	printf("Chislo:");
	scanf("%d",&chislo);
	for(cifra=0;cifra<10;cifra++)
    {
		broi=0;
		neshto = chislo;
		while(neshto >= 1)
		{
			if(neshto % 10 == cifra)
            broi++;
			neshto/=10;
		}
		if(broi != 0) printf("Cifrata %d e napisana %d puti\n",cifra,broi);
	}
}

