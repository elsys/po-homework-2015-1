#include <stdio.h>

int main(){
	int n,i,s,k;
	printf("enter n:");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
    for(s=0;s<n-i;s++)
        printf("  ");
    for(k=i;k<=2*i-1;k++)
        printf("1 ");
    for(k=0;k<i-1;k++)
        printf("1 ");
    printf("\n");}
}
