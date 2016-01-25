#include <stdio.h>
#include <string.h>

int main()
{
 	int a,b,i;
 	scanf("%d",&a);
 	
 	for(i=1;i<=a;i++)
 	{
 		for(b=1;b<=(2*i-1);b++)
 		{
 			printf("*");
 		}
 	
 		printf("\n");
 	}
 	
 	
 	return 0;
 	
}

