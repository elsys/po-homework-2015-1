#include <stdio.h>

int is_prime(int n);

int main(){

	int n;

	if(!scanf("%d", &n)){

		printf("%d \n", -1);

	}else{

		printf("%d \n", is_prime(n));

	}

	return 0;

}

int is_prime(int n){

	int i;

	for(i = 2;i < n/2;i++){

		if(n%i == 0){

			return 0;

		}

	}

	return 1;

}
