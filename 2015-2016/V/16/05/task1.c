#include <stdio.h>

int main(){
	int i, j, matr[4][4], trans[4][4];
	printf("Enter the numbers for the matrix:\n");

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			scanf("%d", &matr[i][j]);

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			trans[j][i] = matr[i][j];

	printf("The transposed matrix looks like this:\n");
	
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++)
			printf("%d\t", trans[i][j]);
		printf("\n");
	}
	return 0;
}

