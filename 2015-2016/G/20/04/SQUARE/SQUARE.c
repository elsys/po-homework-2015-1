#include<stdio.h>

void main (void)
{
 int Size;
 scanf("%d", &Size);
 int Square[Size][Size];
 int i,j;
 for(i=0;i<Size;i++)
 {
  for(j=0;j<Size;j++)
  scanf("%d", &Square[i][j]);
 }
 int Sum=0,Current=0;
 int Magic=1;
 for(i=0;i<Size;i++)
  {
   for(j=0;j<Size;j++)
   {
    Current=Current+Square[i][j];
   }
   if(i==0)
   Sum=Current;
   
   else
    {
     if(Sum !=Current)
     Magic=0;
    } 
   Current=0; 
  }
 Current=0;
 for(i=0;i<Size;i++)
 Current=Current+Square[i][i];
 if(Sum !=Current)
 Magic=0;
 Current=0;
 j=Size-1;
 for(i=0;i<Size;i++)
     {
      Current=Current+Square[i][j];
      j--;
     }
 if(Sum !=Current)
 Magic=0;
 if(Magic)
 printf("Магически");
 
 else
 printf("Не е магически");
}
