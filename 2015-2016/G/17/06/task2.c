#include <stdio.h>
int exact_square (int);
int main()
 {
  int num,i;
  scanf("%d",&num);
  i=exact_square(num);
  printf("%d",i);
  return 0;
 }

int exact_square (int num)
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
