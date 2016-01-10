#include <stdio.h>

int isMagicSquare(int n, int numbers[n][n]);

int main(){

	int i,j,n;

	scanf("%d", &n);

	int numbers[n][n];

	for(i=0;i<n;i++){

		for(j=0;j<n;j++){

			scanf("%d", &numbers[i][j]);

		}

		

	}

	if(isMagicSquare(n,numbers)){

		printf("magic \n");

	}else{

		printf("not magic \n");

	}
	
	return 0;

}

int isMagicSquare(int n, int numbers[n][n]){

	int i,j,sum=0,check=0;
	
	for(i=0;i<n;i++){

		sum = sum + numbers[0][i];

	}

	for(i=0;i<n;i++,check=0){

		for(j=0;j<n;j++){

			check = check + numbers[i][j];
			check = check + numbers[j][i];
			check = check + numbers[j][j];
			check = check + numbers[j][n-(j+1)];

		}

		if(check!=sum*4){

			return 0;

		}


	}

	return 1;

}
