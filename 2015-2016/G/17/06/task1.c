#include <stdio.h>
int funk (int);
int main()
 {
  int num,i;
  scanf("%d",&num);
  i=funk(num);
  printf("%d",i);
 }

int funk (int num)
 { 
  int counter,i=0;
 
  for(counter=0;counter<=num;counter++)
   {
     if(num==counter*counter)
     i++;	
   }
  if(i>0)
   counter=1;
  else
   counter=0;

  return counter;

 }
