#include <stdio.h>

int main(){

int matrix[4][4];
int matrixx[4][4];
int i,a;
	for(i=0;i<4;i++){
		for(a=0;a<4;a++){
		scanf("%d",&matrix[i][a]);	
		
		}


	}


	for(i=0;i<4;i++){
			for(a=0;a<4;a++){	
			matrixx[i][a]=matrix[a][i];
			}


	}
	for(i=0;i<4;i++){
		for(a=0;a<4;a++){
		printf("%d ",matrixx[i][a]);	
		
		}

		printf("\n");


	}


return 0;
}
