#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
//Prochita chislo ot standartniq vhod.Izvejda na ekrana za vsqka cifra ot chisloto, po kolko puti se povtarq.
int main()
{
	int n, cifri[20] = {0}, y;

	printf("Vuvedi chislo: ");
	scanf("%d", &n);

	while(n!=0)
	{
		cifri[n%10]++;
		n/=10;
	}
    y=0;
	while(y<10)
	{
		if(cifri[y]!=0)
        {
            printf("Cifrata %d se sreshta %d puti \n", y, cifri[y]);
        }
        y++;
	}

}
