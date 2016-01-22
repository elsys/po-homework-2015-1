#include <stdio.h>

int main()
{
 char enter[90];
 int counter;
do{
  scanf("%s" ,enter);
  
if(enter[0]=='S' && enter[1]=='T' && enter[2]=='O' && enter[3]=='P')
 {
  break;
 }else
{
for(counter = 0;counter < 90;counter++)
 {
  if(enter[counter] >= 'a'&& enter[counter] <= 'z')
   {
     enter[counter] = enter[counter] - 32; 
   }
 }
 printf("%s \n" ,enter);
} 
  }while(1);
 return 0;
}
