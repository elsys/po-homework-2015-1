#include <stdio.h>
int main()
{
	int a,b;
	
	do
	{
		scanf("%d",&a);
		scanf("%d",&b);
	}
	while((a<0 || a>7)&(b<0 || b>200));

	   int mask = 1 << a;
	   int result = b & mask;
	   if(result==0)
	   {
	   	printf("0");
	   }else printf("1");
	   
	   
	   
	return 0;
}
