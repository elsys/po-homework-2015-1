#include <stdio.h>
void is_prime(int);

int main() {
	int n=0;
	scanf("%d",&n);
	is_prime(n);
	return 0;
}
void is_prime(int n){
	int c=2;
	while(n%c!=0){
		c++;
	}

	if( n==c ) {
	
		printf("1");
	}

	if( n != c) {
		printf("0");
	}

	if( n<0 ) {
		printf("-1");
	}
}
