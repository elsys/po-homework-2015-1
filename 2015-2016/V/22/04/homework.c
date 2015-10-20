#include <stdio.h>
void main (void)
{
	int i=0,n,j,a;
	printf("\n input number:");
	scanf("%d",&n);
	while(n>0){
		a=n/10;
		j=n%10;
		while(a>0){
			if(j==a%10){
				printf("\n %d",j);
				i=1;
				}
			a=a/10;
		}
		n=n/10;
	}
	if(i==0)
		printf("\n no equal digits");
}
