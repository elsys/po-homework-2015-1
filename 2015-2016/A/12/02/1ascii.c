#include<stdio.h>
#include<conio.h>
void main(void)
{
   int i=0, n=0;
   for(i=0;i<256;i++)
   {
       n++;
       if(n>25)
       {
           n=0; printf("\nPress a to continue");
           getch();
       }
       printf("\n%d %c",i,i);
   }
}
