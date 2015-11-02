#include <stdio.h>

int main(){
	int r, c, i, j, matr[10][10], trans[10][10];
	printf("Enter the number of rows:\n");
	scanf("%d", &r);
	printf("Enter the number of columns:\n");
	scanf("%d", &c);
	printf("Enter the numbers for the matrix:\n");

	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			scanf("%d", &matr[i][j]);

	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			trans[j][i] = matr[i][j];

	printf("The transposed matrix looks like this:\n");
	
	for (i = 0; i < c; i++){
		for (j = 0; j < r; j++)
			printf("%d\t", trans[i][j]);
		printf("\n");
	}
	return 0;
}

