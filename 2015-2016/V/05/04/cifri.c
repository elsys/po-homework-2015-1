#include<stdio.h>
int main()
{
  int a[10];
  int b,c,c1,d,t;
  scanf("%d",&b);
  for(c=0;b>=1;c++)
   {
     a[c]= b % 10;
     b= b/10;
   }
    for(d=0;d<10;d++)
   {
     t=0;
     c1=c;
     while(c1>=0)
    {
      if(d==a[c1])
         t++;
          c1--;
      }
       if(t!=0)
         {
           printf("%d times %d \n",t,d);
   }
  }
 } 
















