#include<stdio.h>
#include<string.h>
#include <stdbool.h>

int main(){

	int num[1000];
	int a,b,n,i;

	for(i=0;num[i-1]!=42 && i<=10;i++){

		scanf("%d", &num[i]);

	}

	n=i-1;
	for(i=0;i<n;i++){

		for(b=n-1;b>i;b--){
			
			if(num[b-1]>num[b]){
	
				a=num[b-1];
				num[b-1]=num[b];
				num[b]=a;	
			}
		}

	}

	for(i=0;i<n;i++){

		printf("\n id[%d] - value: %d \n ", i, num[i]);

	}


	return 0;

}
