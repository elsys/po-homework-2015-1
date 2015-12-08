#include <stdio.h>

void swap(int *pa, int *pb){

    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main(){

    int n ,k ;

    scanf("%d %d", &n, &k);
    swap(&n, &k);
    printf("%d %d", n, k);

    return 0;
}
