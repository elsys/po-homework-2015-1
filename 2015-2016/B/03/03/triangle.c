#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,k,h,d;
    printf("Wuwedi n: "); scanf("%d", &n);
    h=2*n-1;
    printf("\n");
    for(i=0; i<n; i++) {
        for(d=0; d<i; d++) printf(" ");
        for(k=0; k<h-2*i; k++) {
            printf(".");
        }
        printf("\n");
    }
    return 0;
}
