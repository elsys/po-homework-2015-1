#include <stdio.h>

int main(){
	int a[4][4];
	int i,k,swap;
	for(i = 0;i < 4;i++){
		for(k = 0;k < 4; k++){
			printf("Enter the number on %d %d postions\n",i,k);
			scanf("%d",&a[i][k]);
		}
	}
	for(i = 0; i < 4; i++){
		for(k = 0;k < 4;k++){
			printf("%d ",a[i][k]);
		}
		printf("\n");
	}
	for(i = 0;i < 4;i++){
		for(k = i;k < 4;k++){
			swap = a[i][k];
			a[i][k] = a[k][i];
			a[k][i] = swap;
		}
	}
	for(i = 0; i < 4; i++){
		for(k = 0;k < 4;k++){
			printf("%d ",a[i][k]);
		}
		printf("\n");
	}
	return 0;
}
