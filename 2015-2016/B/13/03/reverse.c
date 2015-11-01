#include<stdio.h>
#include<string.h>
int main()
{
  char duma[100];
   int l;

   scanf("%[^\n]s", duma);
   
   l=strlen(duma);
     
    for(l=l-1;l>=0;l--)
     { printf("%c",duma[l]); }

     printf("\n");
     
   return 0;

}
