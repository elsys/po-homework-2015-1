#include<stdio.h>
#include<string.h>
#include <stdbool.h>

int main(){

	int d[100];
	int i,j,a,b,n,count=1;

	scanf("%d", &n);

	for(i=0;n!=0;i++){

		d[i] = n%10;
		n/=10;

	}

	n = i;

	for(i=0;i<n;i++){

		for(b=n-1;b>i;b--){
			
			if(d[b-1]>d[b]){
	
				a=d[b-1];
				d[b-1]=d[b];
				d[b]=a;	
			}
		}

	}

	for(i=0;i<n;i++){

		for(b=i+1;b<n;b++){
			
			if(d[i]==d[b]){
				
				count++;
				
			}else{

				break;
			
			}

		}

		printf("\n %d - %d \n", d[i], count);
		i = b - 1;
		count = 1;

	}

	return 0;

}
