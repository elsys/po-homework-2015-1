#include<stdio.h>

int main(){


	int i,j,n;

	scanf("%d", &n);

	for(i=0;i<=n;i++){

		for(j=0;j<n-i;j++){

			printf(" ");

		}

		printf("/");

		for(j=0;j<2*i-1;j++){

			if(i==n){

			printf("_");

			}else{

				printf(" ");

			}

		}

		if(i==0){

			printf("\\ \n");

		}else{

			printf(" \\ \n");

		}

		

	}
	
	return 0;

}
