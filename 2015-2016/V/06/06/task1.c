#include <stdio.h>
int is_prime(int);

int main(){
	int n;
	scanf("%d",&n);
	is_prime(n);
}
int is_prime(int n){
	int i=2;
	while(n%i!=0){
		i++;
	
	}
	if(i==n){
		printf("1");
	
	}
	if(i!=n){
		if(n<=0){
			printf("-1");
		}
	   	if(n>0){
	   		printf("0");
		}
	}
}
