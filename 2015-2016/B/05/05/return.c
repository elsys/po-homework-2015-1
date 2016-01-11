#include <stdio.h>
void rotr(int *a, int *b, int *c, int n){
int x,i;
for (i=1;i<=n;i++){
    x = *c;
    *c = *b;
    *b = *a;
    *a = x;
    }
}
int main (){
int a, b, c, n;
scanf("%d  %d  %d  %d", &a, &b, &c, &n);
rotr(&a, &b, &c, n);
printf(" %d  %d  %d ", a, b, c);
return 0;
}
