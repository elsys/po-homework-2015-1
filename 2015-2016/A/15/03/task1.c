#include <stdio.h> 	//Ot standartniq vhod se vuvejda chislo n. Trqbva da se izvede triugulnik s visochina n i osnova 2n-1

int main()
{
	int n, i, l;
	printf("Input triangle height: ");
	scanf("%d", &n);

	while(n<2)
		printf("How do you expect me to create a text triangle with less than 2 characters height?");

	for(i=0; i<n; i++)
	{
		for(l=0; l<=(n+1+i); l++)
		{
			if(l==(n+1) && i==0)
				printf(".\n");
			else if(l==(n+1-i))
				printf("/");
			else if(l==(n+1+i))
				printf("\\\n");
			else if(i==n-1 && l>(n+1-i) && l<(n+1+i))
				printf("_");
			else
				printf(" ");
		}
	}

	return 1;
}
