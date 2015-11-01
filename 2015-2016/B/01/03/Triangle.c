#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n,n1,a=0,b=0;
     char c = '$';

    printf("Vavedi n - ");scanf("%d",&n);

      while(n!=0){
             n1=n;
       while(n1!=0){
        printf(" ");
              n1--;}

          while (a>=0){
              printf("%c",c);
                  a--;}
         b=b+2;
         a=b;
         n--;
         printf("\n");
            }
    return 0;
}
