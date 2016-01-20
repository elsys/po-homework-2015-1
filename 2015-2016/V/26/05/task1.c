#include <stdio.h>

int main(){
	int a=4, c=4, i, j, m[10][10], t[10][10];
	for(i=0; i<a; i++){
		for(j=0; j<c; j++)
			scanf("%d",&m[i][j]);
	}
	for(i=0; i<a; i++){
		for(j=0; j<c; j++)
			t[j][i] = m[i][j];
	}
	for(i=0; i<c; i++){
		for(j=0; j<a; j++)
			printf("%d\t",t[i][j]);
		printf("\n");
	}
	return 0;
}

