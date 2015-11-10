#include <stdio.h>
#include <stdlib.h>
int exact_square(int res , int ch);
int main()
{
  int ch,res;
    printf("Vasheto chislo : ");scanf("%d",&ch);
exact_square(res,ch);

}
int exact_square(int res ,int ch )
{
  int counter;
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
}
