#include <stdio.h>
#include <stdlib.h>
int exact_square(int ch);
int main()
{
  int ch;
   printf("Vasheto chislo : ");scanf("%d",&ch);
   exact_square(ch);
   return 0;
}
int exact_square(int ch)
{
  int counter,res;
 for(counter = 0; counter <= ch; counter++)
 {
       if(ch < 1)
        {
            res=0;
            break;
        }
    if(counter*counter == ch )
    {
            res=1;
            break;
    }
    else res=0;
 }
printf("%d",res);
return res; 
}
