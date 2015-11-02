#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int num;
int is_prime ( int );
int main() {
	
	scanf("%d",&num);
	printf("%d", is_prime(num));
	printf("\n");
		

 return 0;
}
int is_prime ( int num ){
	if (num<=0) return -1;
	int divider = 2;

	while (num % divider == 0){
		
		if (divider != num) {return 0; break;}
		divider++;
	}
 return 1;

}
