#include<stdio.h>
#include<stdlib.h>
int main(void){
int n,i,x,y;
printf("n=");scanf("%d",&n);
	for(i=0;i<=n;i++){
	x=n-i;
		for(y=0;y<2*n;y++){
			if(y>=x && (2*n-1)-y>x){
			printf("0");
			}
			else{
			printf(" ");
			}
		}
	printf("\n");
	}
}
