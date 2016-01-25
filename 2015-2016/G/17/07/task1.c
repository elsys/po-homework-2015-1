#include <stdio.h>

void rotr(int *a,int *b,int *c);
int main()
{
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
rotr(&a,&b,&c);
return 0;
}
void rotr(int *a,int *b,int *c)
{
int rots,k,i;
scanf("%d",&rots);
for (i=0;i<rots;i++)
{
k=*a;
*a=*c;
*c=*b;
*b=k;
}
printf("%d %d %d",*a,*b,*c);
return;

}


