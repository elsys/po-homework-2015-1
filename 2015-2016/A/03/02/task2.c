#include<stdio.h>

int main()
{
  char c;  
  int i=0;
  do
  {
   scanf("%c",&c);
   if((c=='S' && i==0) || (c=='T' && i==1) || (c=='O' && i==2) || (c=='P' && i==3))
    {i++;} 
     else
      {   
        i=0;
       }

   if(c>='a' && c<='z')
   { 
     printf("%c",c-32);
   }
   else
   {
     printf("%c",c);
   }
 
}
 while(i<4);
printf("\n");
return 0;
}

