#include<stdio.h>
int main()
{
int n,v;
int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,k=0,l=0;
scanf("%d",&n);
while(n>0)
{
v=n%10;
if(v==0) a++;
if(v==1) b++;
if(v==2) c++;
if(v==3) d++;
if(v==4) e++;
if(v==5) f++;
if(v==6) g++;
if(v==7) h++;
if(v==8) k++;
if(v==9) l++;
n=n/10;
}
printf("\n 0li = %d", a);
printf("\n 1ci = %d", b);
printf("\n 2ki = %d", c);
printf("\n 3ki = %d", d);
printf("\n 4ki = %d", e);
printf("\n 5ci = %d", f);
printf("\n 6ci = %d", g);
printf("\n 7ci = %d", h);
printf("\n 8ci = %d", k);
printf("\n 9ki = %d", l);
}
