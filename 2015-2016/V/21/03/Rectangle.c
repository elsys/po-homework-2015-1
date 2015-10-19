#include <stdio.h>

int main (){
	int height = 0, counter = 1, width = 0, stars = 1, spaces = 0, spacecounter = 1;
	printf("Enter height: ");
	scanf("%d",height);
	
	width = (2*height) - 1;
	
	for(counter = 1; counter < height; counter++)
		{
			spaces = width - stars;
			for(spacecounter = 1; spacecounter < spaces/2; spacecounter++)
				{
					printf("%c",32);
				}
			for(; stars<width; stars=stars+2)
				{
					printf("%c",42);
					for(; spacecounter < spaces; spacecounter++)
						{
							printf("%c",32);
						}
				}
			printf("\n");
		}
	
	return 0;
}
//има грешки в 1-2 цикъла, но съм доста изморен и просто въобще не ми е до това сега