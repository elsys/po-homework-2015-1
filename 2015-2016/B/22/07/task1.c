#include <stdio.h>

int main(){
	int a , b;
	scanf("%d %d", &a, &b);
	
	b = b & (1 << a);

	if( b >> a == 1){
		printf("1");
	}else printf("0");		
	
	printf("\n");

	return 0;
}
