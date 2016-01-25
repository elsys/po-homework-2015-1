#include <stdio.h>

int main()
{
   int n,v,p;
    scanf("%d",&n);
    scanf("%d",&v);
    scanf("%d",&p);


   if(((n>>p)& 1)==1)
        if(v==0)
             n= n- (1<<p);

    if(((n>>p)& 1)==0)
         if(v==1)
             n= n+(1<<p);
      printf("%d",n);

    return 0;
}
