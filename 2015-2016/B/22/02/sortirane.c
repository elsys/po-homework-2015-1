#include <stdio.h>

int main()
{
   int R[1000],a=-1,p,min,j,b;

 do {
      a++;
      scanf("%d",&R[a]);
      

}while (R[a]!=42);


p=a;
  for(a=0;a<=p;a++)
  {
   min=a;
   for(j=a+1;j<=p;j++)
    
             if(R[min]>R[j])
                   min=j;

                 b=R[min];
                 R[min]=R[a];
                 R[a]=b;
       
  }
 
for(a=0;a<=p;a++)
{
 printf("\n%d",R[a]);

}

 return 0;
}
