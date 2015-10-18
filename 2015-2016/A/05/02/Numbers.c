#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
//Prochita redica ot chisla ot standartniq vhod i gi izvejda sortirani vuv vuzhodqsht red.
//Programata chete ot standartniq vhod dokato ne vidi chisloto 42. Mogat da se vuvedat max 1000 chisla
void main()
{

	int numbers[1000],t,n,i,l;

	for(n=0; n<1000; n++)
        {
		printf("Vuvedi chislo: ");
		scanf("%d", &t);
		if(t==42)
		{
		    break;
		}
        numbers[n]=t;
	}

	for(i=0;i<(n-1);i++)
	{
		for(l=0;l<n-(i-1);l++)
		{
			if(numbers[l]>numbers[l+1])
			{
			t=numbers[l];
			numbers[l]=numbers[l+1];
			numbers[l+1]=t;
			}
		}
	}

	for(i=0; i<n; i++)
	printf("%d\n", numbers[i]);
	printf("Dovijdane :)");
}
