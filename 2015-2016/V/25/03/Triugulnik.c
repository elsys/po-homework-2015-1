#include <stdio.h>

int main()
{
   	int i,m,n,k=0;
   	printf("Vuvedete n: ");
   	scanf("%d",&n);
   	for(i=1;i<=n;++i)
   	{
       		for(m=1;m<=n-i;++m)
        	{
          		printf("   ");
       		}
        	while(k!=2*i-1)
        	{
        		printf(" * ");
        		++k;
        	}
        	k=0;
        	printf("\n");
   	}
    	return 0;
}
