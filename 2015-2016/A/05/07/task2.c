#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,v,p;
do{scanf("%d %d %d",&n,&v,&p);
}while((v>1 || v<0) || (p>7 || p<0));
if(v==1)
  {printf("%d",n | (1<<p));}
else if(v==0)
  {printf("%d",n ^ (1<<p));}
return 0;
}
