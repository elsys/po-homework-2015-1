#include <stdio.h>	//Prochita redica ot chisla ot standartniq vhod i gi izvejda sortirani vuv vuzhodqsht red.
					//Programata chete ot standartniq vhod dokato ne vidi chisloto "42". Mogat da se vuvedat maximum 1000 chisla	
void main()
{

	int numbers[1000], temp, amountOfNumbers, i, l;
	
	for(amountOfNumbers=0; amountOfNumbers<1000; amountOfNumbers++) {
		printf("Input number: ");
		scanf("%d", &temp);
		if(temp==42)
			break;
		numbers[amountOfNumbers]=temp;
	}
	
	for (i = 0 ; i < ( amountOfNumbers - 1 ); i++)
	{
		for (l = 0 ; l < amountOfNumbers - i - 1; l++)
		{
			if (numbers[l] > numbers[l+1])
			{
			temp = numbers[l];
			numbers[l] = numbers[l+1];
			numbers[l+1] = temp;
			}
		}
	}
	
	for(i=0; i<amountOfNumbers; i++)
	printf("%d\n", numbers[i]);
	
}
