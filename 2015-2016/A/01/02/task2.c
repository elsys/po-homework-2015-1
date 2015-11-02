#include <stdio.h>

void main ()
{
char c[100];int i=0,n=0;
while ((c[i-3]!='S') && (c[i-2]!='T') && (c[i-1]!='O') && (c[i]!='P'))	
{
scanf ("%c",&c[i]);
i++;
}
while (n!= (i-3))
{
if ((c[n]>='a') && (c[n]<='z')) 
{
printf("%c",c[n]-32);
}
else 
{
printf("%c",c[n]);
}
n++;
}
		printf ("\n");
	
	}


	
