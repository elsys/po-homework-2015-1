#include <stdio.h>
void exact_square(int);

int main() {
	int n=0;
	scanf("%d",&n);
	exact_square(n);
	return 0;
}
void exact_square(int n){
	int i=0, result=0;
	for( i=0 ; i<n ; i++ ) {
		if( i*i==n ){
			result=1;
			break;
		}
	}
	
	if( result==1 ) {
		printf("\n 1");
		printf("\n %d=%d^2", n, i);
	}
	if( result==0 ) {
		printf("\n 0");
		printf("\n This number does not have an exact root");
	}
	printf("\n");
}
