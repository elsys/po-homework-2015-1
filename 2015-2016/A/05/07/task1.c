#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,temp;
do{
scanf("%d %d",&a,&b);
}while((a>7 && a<0) || (b>200 && b<0));
temp=(b>>a) & 1;
printf("%d",temp);
}
