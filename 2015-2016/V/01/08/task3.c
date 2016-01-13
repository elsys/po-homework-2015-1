#include <stdio.h>
#include <stdlib.h>

int main()
{
 int eleni[200];
 int i,broi,j;
 scanf("%d",&broi);
 for(i=0;i<broi;i++)
 {
  scanf("%d",&eleni[i]);
 }
 for(i=0;i<broi;i++)
 {
  for(j=0;j<broi;j++)
  {
   if(i!=j)
   {
    if(eleni[j]==eleni[i])
    {
     break;
    }
   }
  }
  if(j==broi)
  {
   printf("%d",eleni[i]);
   return 0;
  }
 }
 printf("%d",eleni[i+1]);
 return 0;
}
