#include <stdio.h>
void r(int*, int*, int*);
int main()
{
int a;
int b;
int c;
int d;
scanf("%d %d %d %d", &a, &b, &c, &d);

while (d>0)
{
r(&a, &b, &c);
d=d-1;
}
printf("%d", a);
printf("%d", b);
printf("%d", c);
return 0;
}
void r(int *a, int *b, int *c)
{

int t=*a+*b;
*a=*c;
*b = t-*b;
*c = t-*b;
}
