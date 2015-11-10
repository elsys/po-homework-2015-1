#include <stdio.h>

int exact_square(int n);

int main(){

	int n, c;

	c = scanf("%d", &n);

	while(c!=1){

		c = scanf("%d", &n);

	}

	printf("%d \n" , exact_square(n));

	return 0;

}

int exact_square(int n){

	int i = 1;

	for(;i<=n/2;i++){

		if(n == i*i){

			return 1;

		}

	}


	return 0;

};
