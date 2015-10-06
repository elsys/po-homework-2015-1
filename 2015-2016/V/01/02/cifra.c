#include <stdio.h>

int main()
{
 int chislo,i=0,broi,j;
 printf("\n Vyvedi chislo");
 scanf("%d",&chislo);
 while(i<10)
 {
  broi=0;
  j=chislo;
  while(j!=0)
  {
   if(chislo%10==i)
     broi++;
   j=j/10;
  }
  if(broi!=0)
    printf("\n Chisloto %d se sreshta %d puti",i,broi);
    i++;
 }
  return 0;
} 
   
  
  
