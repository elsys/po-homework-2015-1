#include<stdio.h>

void rotr(int *a, int *b, int *c);

int main(){
    int a,b,c,i;
    scanf("%d %d %d %d", &a, &b, &c, &i);
    i = i%3;
    for(;i>0;i--) rotr(&a, &b, &c);
    printf("\n%d %d %d", a, b, c);
    return 0;
}
void rotr(int *a, int *b, int *c){
    int swp;
    swp = *c;
    *c = *b;
    *b = *a;
    *a = swp;
}
