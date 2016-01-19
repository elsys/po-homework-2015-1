#include <stdio.h>

int rotr(int *a, int *b, int *c);
int main()
{
    int *a, *b, *c;
    int n;
    //printf("Enter 3 numbers and number of times to rotate: \n");
    scanf ("%d %d %d %d", &a, &b, &c, &n);
    //printf("%p %p %p \n", a, b, c);
    while(n>0){
        rotr(&a, &b, &c);
        n--;
    }
    printf("%d %d %d \n", a, b, c);
    return 0;
}
int rotr(int *a, int *b, int *c) {
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}
