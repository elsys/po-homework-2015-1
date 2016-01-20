#include <stdio.h>
#include <stdlib.h>
#if !defined LEN
#define LEN 4
#endif

void* transpose(int* matrix, int x, int y) {
	int** transpocd = (int**)malloc(x * sizeof(int*)); 
    int i = 0, j = 0;
	for(; i < x; i++)
		transpocd[i] = (int*)malloc(y * sizeof(int));
	i = 0;
    for(; i < x; i++) {
        for(j = 0; j < y; j++)
            *(*(transpocd + i) + j) = *(matrix + j*x + i);
    }
	return transpocd;
}

int main() {

    int i = 0, j = 0;
    int matrix[LEN][LEN];
    for(; i < LEN; i++) {
        for( j = 0 ; j < LEN; j++)
            scanf("%d",&matrix[i][j]);
        printf("\n");
    }

    int** a = (int(**))transpose(&matrix[0][0], LEN, LEN);

    for(i = 0; i < LEN; i++) {
        for(j = 0; j < LEN; j++)
            printf(" %4d ", a[i][j]);
        printf("\n");
    }
	free(a);
    return 1;
}
