#include <stdio.h>
void rotr(int *a,int *b,int *c)
{   int helper1, helper2;
        helper1=*a;
        helper2=*b;
        *a=*c;
        *b=helper1;
        *c=helper2;
}

int main(){
    int a, b, c, n;
    scanf("%d %d %d %d", &a, &b, &c, &n);
    while(n!=0){
        rotr(&a, &b, &c);
        n--;
    }

     printf("%d %d %d", a, b, c);
    return 0;
}
