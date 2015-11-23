#include <stdio.h>
#include <stdlib.h>

void rotr(int *a, int *b, int *c,int counter){

 int help,help1;

while (counter!=0){
    help=*c;
    help1=*a;
    *a=help;
    *c=*b;
    *b=help1;
     counter--;
            }
}

int main()
{
    int a,b,c,counter;

    scanf("%d %d %d %d",&a , &b , &c , &counter);

    rotr(&a,&b,&c,counter);

    printf("%d %d %d",a,b,c);

    return 0;
}
