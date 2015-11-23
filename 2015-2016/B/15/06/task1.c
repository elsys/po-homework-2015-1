#include <stdio.h>
#include <stdlib.h>
int change(int *a, int *b , int *c);
int main()
{
int a,b,c;
 printf("a=");scanf("%d",&a);

    printf("b=");scanf("%d",&b);

    change(&a,&b,&c);

printf("\na=%d \nb=%d",a,b);
return 0;
}

int change(int *a, int *b, int *c)
{

 *c = *a;
 *a = *b;
 *b = *c;
return 0;
}
