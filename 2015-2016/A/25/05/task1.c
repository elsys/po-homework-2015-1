#include <stdio.h>

void rotr(int *a,int *b,int *c);

int main(){
    int a,b,c,rotations,i;

    scanf("%d %d %d %d",&a,&b,&c,&rotations);

    for(i=0;i<rotations;i++){
        rotr(&a,&b,&c);
    }

    printf("%d %d %d",a,b,c);

    return 0;
}

void rotr(int *a,int *b,int *c){
    int temp= *b;
    *b= *a;
    *a= *c;
    *c= temp;
}
