#include <stdio.h>

int is_prime(int n);

int main(){
	int n, b;
	printf("Enter number:");
	scanf("%d", &n);
	b = is_prime(n);
	printf("%d", b);
}

int is_prime(int n){
	int d=2;	
	while (d < n){
		if(n % d == 0){
			d++; 
			return 0;
			}
		if (n % d != 0)
			return 1;
			}
		if (n <= 1)
			return -1;
	return 1;
}
