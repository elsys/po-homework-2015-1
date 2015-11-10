#include <stdio.h>
#include <stdlib.h>

int rotr(int *,int *,int *);

int main()
{
    int a;
    int b;
    int c;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    rotr(&a,&b,&c);

    return 0;
}
int rotr(int *a,int *b,int *c){

    int n;
    int i;
    int a_old = *a;
    int b_old = *b;
    int c_old = *c;

    scanf("%d",&n);

    for(i = 0;i < n;i++){

        *a = c_old;
        *b = a_old;
        *c = b_old;

        c_old = *a;
        a_old = *b;
        b_old = *c;

    }

    printf("%d %d %d",*a,*b,*c);

    return 0;
}
