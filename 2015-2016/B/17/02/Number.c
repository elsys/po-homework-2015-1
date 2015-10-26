#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;

    scanf("%d",&n);

    while(n!=0){
       x=n%10;
       if(x==0) a++;
       if(x==1) b++;
       if(x==2) c++;
       if(x==3) d++;
       if(x==4) e++;
       if(x==5) f++;
       if(x==6) g++;
       if(x==7) h++;
       if(x==8) i++;
       if(x==9) j++;
       n=n/10;
    }
    printf("\n%d",a);
    printf("\n%d",b);
    printf("\n%d",c);
    printf("\n%d",d);
    printf("\n%d",e);
    printf("\n%d",f);
    printf("\n%d",g);
    printf("\n%d",h);
    printf("\n%d",i);
    printf("\n%d",j);

    return 0;
}


