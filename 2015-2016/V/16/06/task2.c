#include <stdio.h>

int exact_square(int n);

int main(){
	int b;
	int n;
	printf("Enter a number:\n");
	scanf("%d", &n);
	b = exact_square(n);
	printf("%d\n", b);
}

int exact_square(int n){
	int a;
	for (a = 0; a * a <= n; a++){
		if (n == a * a){
			return 1;
			}
	}
	return 0;
}
