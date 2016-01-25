#include <stdio.h>

int main()

{

	int a,b,i;
	int arr[31]={0};
	do{	
	scanf("%d",&a);
	}while(a>7||a<0);
	
	do{	
	scanf("%d",&b);
	}while(b>200||b<0);

	for(i=31;i>=0;i--)
	{
		arr[i]=b%2;
		b=b/2;	
	}	
	
	printf("%d \n",arr[31-a]);	

return 0;
}
