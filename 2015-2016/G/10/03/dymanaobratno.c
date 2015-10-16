#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char bykva, dyma[100];

   int m,k=0;

   gets(dyma);

   m=strlen(dyma)-1;

   while(m>k){

   bykva=dyma[k];
    dyma[k]=dyma[m];
     dyma[m]=bykva;

       k=k+1,m=m-1;


   }
puts(dyma);
   return 0;
}
