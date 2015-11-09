#include <stdio.h>

void rotr(int *a, int *b, int *c){
    int swapper1, swapper2, swapper3;
        swapper1=*a;
        swapper2=*b;
        swapper3=*c;
        *a=swapper3;
        *b=swapper1;
        *c=swapper2;
}

int main(){
        
    int a, b, c, n, count;
    printf("Enter numbers and number of rotations\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &n);
    for(count=0; count<n; count++){
        rotr(&a, &b, &c);
    }
    printf("\n %d %d %d \n", a, b, c);    
