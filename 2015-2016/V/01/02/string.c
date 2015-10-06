#include <stdio.h>
#include <string.h>

int main()
{
 char izr[50];
 int i,k,ops=1;
 int duljina;
 int stop;
 printf("Vyvedi izrechenie");
 while(1)
 {
  scanf("%s",izr);
  duljina=strlen(izr);
  while(izr[i]==duljina)
  {
    if(izr[i]='S')
     if(izr[i+1]='T') 
      if(izr[i+2]='O')
       if(izr[i+3]='P')
       {
         stop=1;
         break;
       }
  }
  if(stop==1)
   break;
  k=0;
  while(k<duljina)
  {
   if(izr[k]<'Z')
   printf("%c",izr[k]);
   else;
   printf("%c",izr[k]-32);
   k++;
  }
  }
 return 0;
}
