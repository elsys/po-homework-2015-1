#include <stdio.h>

int is_prime(int number){
	int i;
	for(i=2;i<=number/2;++i){
		if(number%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	float n;
	int i;
	scanf("%f",&n);
	i = n;
	if (i != n){
		printf("-1");
		return -1;
	}

	printf("%d", is_prime(n));

	return 0;
}
