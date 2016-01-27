#include <stdio.h>
int main()
{
	int p,n,v;
	
	do{
		scanf("%d",&n);
		scanf("%d",&v);
		scanf("%d",&p);
		
	}while((v<0 || v>1) || (p<0 || p>7));

	int mask=1;
	//printf("\n%d", mask);
	mask=mask << p;
	//printf("\n%d", mask);
	if(v==0) 
	{
		mask=~mask;
		//printf("%d",mask);
		n=n&mask;
	}	
	else
	{
		n=n|mask;
	}
	printf("%d",n);

return 0;
}
