#include <stdio.h>

int main()
{
    int c[999],i=0,x,l;

    while(i<999)
    {
        printf("Vavedi chislo - ");scanf("%d", &c[i]);
        if(c[i]==42) break;
        i++;
    }
    l=i;
    i=0;

    while(l!=0){

        while(i!=l-1){
          if(c[i]>c[i+1]){
               x=c[i];
               c[i]=c[i+1];
               c[i+1]=x;
                        }
                i++;
                     }
    i=0;
    l--;
    }
     i=0;

     while(c[i]!=42){
        printf("\n%d",c[i]);
        i++;
     }
return 0;
}
