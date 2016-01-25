#include <stdio.h>

int main()
{
 int v,p,n,help;
 scanf("%d",&n);
 do
 {
  scanf("%d",&v);
 }while(v!=0 && v!=1);
 do
 {
  scanf("%d",&p);
 }while(p<0 || p>7);
 help= 1 << p;
 if(v)
 {
  n=n|help;
 }
 else
 {
  n=n&~help;
 }
 printf("%d",n);
 return 0;
}
