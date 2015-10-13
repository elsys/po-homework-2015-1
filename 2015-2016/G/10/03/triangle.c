#include <stdio.h>
#include <stdlib.h>

int main()
{
   int q,i,m=1,p,basis;
    printf("Enter height");
      scanf("%d", &p);

    basis=(2*p)-1;


    while(p>0 ){

        for(i=1;i<p;i++)
        {
             printf(" ");}
              for(q=1; q<=m; q++)printf("*");

               if(m<basis) m=m+2;

                  printf("\n");

   p-- ; }
    return 0;
}
