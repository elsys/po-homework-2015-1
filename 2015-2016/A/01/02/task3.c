#include <stdio.h>
#define max 100
void main ()
{
int b,a[max],i,j,n;


for (i=0;i<100;i++)
{
printf ("vuvedi chislo %d \n", i+1);
scanf ("%d",&a[i]);
if (a[i]==42) 
{
n=i;
printf ("\n");
for (i=0;i<n;i++)
for (j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
b=a[j];
a[j]=a[j+1];
a[j+1]=b;
}
}
for (i=0;i<n;i++)
printf ("%d \n",a[i]);
break;
}
}
}
