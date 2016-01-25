#include<stdio.h>

int main()
{ int a,b;
scanf("%d", &a);
scanf("%d", &b);
if((b&(1<<a))==0)
{printf("0");
}
else
{printf("1");
}
return 0;
 }
