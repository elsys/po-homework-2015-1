#include <stdio.h>
void main(){
    int n,i,j;
    printf("Enter height: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++)
            printf(" ");
        for(j=0;j<2*i+1;j++)
            printf("O");
        printf("\n");
    }
}
