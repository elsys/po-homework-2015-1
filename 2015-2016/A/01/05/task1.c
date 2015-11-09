#include<stdio.h>

void rotr(int*,int*,int*);

int main() 
{
int a,b,c,n;
printf("insert numbers to rotate a,b,c\n");
scanf("%d %d %d",&a,&b,&c);
printf("insert how many times to rotate\n");
scanf("%d",&n);
while (n>0)
{
rotr(&a,&b,&c);
n--;
}
printf("%d %d %d",a,b,c);
return 0;
}

void rotr(int *a, int *b, int *c)
{

int k;
k=*a+*b;
*a=*c;
*b=k-*b;
*c=k-*b;

}

