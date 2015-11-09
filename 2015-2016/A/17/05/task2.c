#include <stdio.h>
int main()
{
	int n, aktuellGen[20], nechsteGen[20], p;
	do
        {
            scanf("%d", &n);
        }while(n < 0 && n > 20);


	p=0;
	while(p<n)
    {
		scanf("%d", &aktuellGen[p]);
		if(aktuellGen[p] != 0 && aktuellGen[p] != 1)
		{
			continue;
		}
		p++;
	}

	p=0;
	printErzeugung(aktuellGen, n);
	do
    {
		nechste_erzeugung(aktuellGen, nechsteGen, n);
		printErzeugung(aktuellGen, n);
	}while(p<1000 && live(nechsteGen, n));

	return 0;
}
int live(int *generation, int lenge)
{
	int p;
	for(p=0; p<lenge; p++)
    {
		if(generation[p])
            {
                return 1;
            }
	}
	return 0;
}
void nechste_erzeugung(int *aktuell, int *nechste, int lenge)
{
	int p;

	nechste[0]=0;
	nechste[lenge-1]=0;
	for(p=1; p<lenge-1; p++)
            {
            if(!(aktuell[p+1] && aktuell[p-1]) && (aktuell[p+1] || aktuell[p-1]))
            {
                nechste[p] = 1;
            }
		else
            {
                nechste[p] = 0;
            }
	}

	for(p=0; p<lenge; p++)
            {
                aktuell[p]=nechste[p];
            }
}
void printErzeugung(int *erzeugung, int lenge)
{
	int p;
	for(p=0; p<lenge; p++)
        {
            if(erzeugung[p]==0)
            {
                printf("%c", '.');
            }
		else
		{
			printf("%c", '*');
		}
	}
	printf("\n");
}
















