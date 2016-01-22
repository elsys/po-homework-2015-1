#include <stdio.h>

int dec_to_hex(char hex[], int n);
int palindrom(char hex[],int duljina);

int main()
{
 char hex[200];
 int n;
 scanf("%d",&n);
 int duljina=dec_to_hex(hex,n);
 while(!palindrom(hex,duljina))
 {
 n+=1;
 duljina=dec_to_hex(hex,n);
 }
 while(duljina>0)
 {
 duljina=duljina-1;
 printf("%c",hex[duljina]);
 }
}


int dec_to_hex(char hex[],int n)
{
 int i;
 for(i=0;n>0;i++)
 {
  switch(n%16){
   case 10:hex[i]= 'A'; break;
   case 11:hex[i]= 'B'; break;
   case 12:hex[i]= 'C'; break;
   case 13:hex[i]= 'D'; break;
   case 14:hex[i]= 'E'; break;
   case 15:hex[i]= 'F'; break;
   default :hex[i]=n%16+48;
   }
    n/=16;
  }
 return i;
}

int palindrom(char hex[],int duljina)
{
 int i,j;
 j=duljina-1;
 for(i=0;i<duljina/2;i++,j--)
 {
  if(hex[i]!=hex[j])
  {
  return 0;		
  }
 }
 return 1;
}
