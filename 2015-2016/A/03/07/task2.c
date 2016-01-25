#include<stdio.h>
int main()
{ int n,v,p,r,pos;
scanf("%d", &n);
scanf("%d", &v);
scanf("%d", &p);
pos=n&(1<<p);
if((pos==0 && v==0) || (pos!=0 && v==1))
{ printf("%d", n);}
else
{if(v==0)
{r=n^(1<<p);}
else
{r=n|(1<<p);}
printf("%d", r);
}
return 0;
}
