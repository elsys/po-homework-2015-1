#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n , v , p , new_digit = 0;

 scanf("%d",&n);

 do{

    scanf("%d",&v);

   }while(v < 0 || v > 1);

   do{

        scanf("%d",&p);

     }while(p < 0 || p > 7);

     if (v == 1)
    {
       new_digit = ((1 << p) | n);
    }

    else
    {
       new_digit = (~(1 << p) & n);
    }

    printf("%d", new_digit);

    return 0;
}
