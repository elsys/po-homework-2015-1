#include <stdio.h>
#include<string.h>
int main ()
{
char duma[100];
char oduma;
printf("vyvedete duma:");
int i=0,l;
gets (duma);
l=strlen (duma)-1;
while(i<l)
{
oduma=duma[l];
duma[l]=duma[i];
duma[i]=oduma;
i++;
l=l-1;
}
printf("Dumata na obratno:");
puts(duma);
return 0;
}
