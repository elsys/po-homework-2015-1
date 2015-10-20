#include <stlib.h>

#include<stdio.h>

void main(void){
int n,c,r,i;
printf("n=");scanf("%d",&n);
printf("c=");scanf("%d",&c);
i=0;
while(n>0){
	r=n%10;
	if(r==c){
		i++;
		n=n/10;
		}
	}
	printf("i=%d",i);
}	
