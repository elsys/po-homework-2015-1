#include <stdio.h>

int main()
{
 int a,b;
 do
 {
  scanf("%d",&a);
 }while(a<0 || a>7);
 do
 {
  scanf("%d",&b);
 }while(b<0 || b>200);
 printf("%d", (b >> a) & 1);
 return 0;
}
