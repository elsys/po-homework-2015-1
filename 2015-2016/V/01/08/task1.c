#include <stdio.h>	
#include <string.h>

void hex_dec();

int main()
{
 char type;
 int r,g,b;
 scanf("%s",&type);	
 if (type=='d')
 {
 scanf("%d,%d,%d",&r,&g,&b);
 printf("#%x%x%x",r,g,b);
 return 0;
 }	
 if (type=='h') 
 {
 hex_dec();
 return 0;
 }	
 return 0;
}

void hex_dec()
{
 int i=0,r,g,b;
 char momo[6];
 scanf("%s",momo);
 for(i=0;i<=6;i++)
 {
  switch (momo[i])
  {
   case '0':momo[i]= 0; break;
   case '1':momo[i]= 1; break;
   case '2':momo[i]= 2; break;
   case '3':momo[i]= 3; break;
   case '4':momo[i]= 4; break;
   case '5':momo[i]= 5; break;
   case '6':momo[i]= 6; break;
   case '7':momo[i]= 7; break;
   case '8':momo[i]= 8; break;
   case '9':momo[i]= 9; break;
   case 'a':momo[i]= 10; break;
   case 'b':momo[i]= 11; break;
   case 'c':momo[i]= 12; break;
   case 'd':momo[i]= 13; break;
   case 'e':momo[i]= 14; break;
   case 'f':momo[i]= 15; break;
  }
 }
 r=(momo[1]*16)+momo[2];
 g=(momo[3]*16)+momo[4];
 b=(momo[5]*16)+momo[6];
 printf("rbb(%d, %d, %d)",r,g,b);
}
