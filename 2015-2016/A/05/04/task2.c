#include <stdio.h>
#include <stdlib.h>
//Velislav Yotov 10a Nomer 5
//exact_square function
//Vuvejda se chislo. Ako ima tochen kvadrat:1 ako nqma:0
int exact_square(int number)
{
int counter,l=0;
  for(counter=0;counter<=number;counter++)
    {
        if (number==counter*counter)
        {
            l=1;
            break;
        }
    }
  if (l==1)
    {
      printf("1");
      return 1;
    }
   else
      {
       printf("0");
       return 0;
      }
}


int main()
{
    int number;
    scanf("%d",&number);
    exact_square(number);
    return 0;
}
