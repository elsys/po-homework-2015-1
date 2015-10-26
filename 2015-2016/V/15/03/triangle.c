#include <stdio.h>

int main() {
	int rows;
	do
		scanf("%d",&rows);
	while(rows <= 0);	

	int stars, current_row, spaces;

	for(current_row = 1; current_row ^ rows+1; current_row++)
	{
		for(spaces = rows - current_row; spaces >= 1; spaces--)
			printf(" ");
		for(stars = 1; stars <= (current_row<<1) - 1; stars++,printf("*"));
		printf("\n");	
	}


	return 0;	
}
