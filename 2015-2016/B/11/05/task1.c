#include <stdio.h>

void rotr(int*, int*, int*);
int main(){
	int num,count,a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&num);
    for(count = 0; count < num; count++){
        rotr(&a, &b, &c);
    }
    printf("%d %d %d",a,b,c);
}

void rotr(int *a, int *b, int *c){
    int dnum = *c;

    *c=*b;
    *b=*a;
    *a=dnum;
}
