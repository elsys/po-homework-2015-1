#include <stdio.h>
int main()
{ 
int hc,c,i,a,z=1;
printf("vuvedi h:");scanf("%d", &hc);
c=(2*hc)-1;
for(;hc>0;hc--)
{
	for(a=1;a<hc;a++)
	{
	printf(" ");
	}
	   for(i=1;i<=z;i++)
	   {
	   printf("*");
	   } 
	    if(z<c){z=z+2;}
printf("\n");
}
 
return 0;
}

