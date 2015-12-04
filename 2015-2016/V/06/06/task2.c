#include <stdio.h>
int exact_square(int);

int main(){
	int n;
	scanf("%d",&n);
	exact_square(n);
	return 0;
}
int exact_square(int n){
	int i,square=0;
	for(i=0;i<n/2;i++){
		if(n==i*i){
			square=i;
			break;	
		}
	}
	if(square==0){
		printf("0");
		printf("\nThis number does not have an exact square");
	}
	if(square!=0){
		printf("1");
		printf("\n %d=%d^2",n,square);
	}
}
