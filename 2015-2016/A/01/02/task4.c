#include <stdio.h>
#define max 100
void main ()
{
int a[max];
int b,i,n=0,k,z;
printf ("vuvedi chislo\n");
scanf ("%d",& b);
printf ("vuvedi cifra za tursene\n");
scanf ("%d",& z);
k=b;
while (k!=0)
{
k=k/10;
n++;
}
for (i=0;i<n;i++)
{
a[i]=b%10;
b=b/10;
}
k=0;
for (i=0;i<n;i++)
{
if (z==a[i])
k++;
}
printf ("cifrata se shreshta %d \n ", k);
}
