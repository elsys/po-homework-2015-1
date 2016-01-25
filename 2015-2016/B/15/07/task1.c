#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a = 0 , b = 0 ;

  do{

     scanf("%d",&a);

    }while(a < 0 || a > 7);

 do{

    scanf("%d",&b);

   }while(b < 0 || b > 200);

   if(((b >> a) & 1) == 1)
    printf("1");

  else
    printf("0");

    return 0;
}
