#include <stdio.h>
int main(){
int c[1000];
int i=0,f,n;
while (i<1000){
    printf("\n Number:");
    scanf("%d",&c[i]);
    if (c[i]==42)break;
    i++;
    }
    for (f = 0; f < i; f++){
        for(n = 0; n< i; n++){
            if(c[f]>c[n]){
            int p=c[f];
            c[f]=c[n];
            c[n]=p;
            }
    }
            }
        for(f=0;f<i;f++)
            printf("\n%d",c[f]);
    return 0;
}
