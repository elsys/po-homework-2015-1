#include <stdio.h>

int main()

{

	int n,v,p,i,a,b=0,num=0;
	int arr[31];
	scanf("%d",&n);
	do{
	scanf("%d",&v);
	}while(v<0||v>1);
	do{
	scanf("%d",&p);
	}while(p<0||p>7);

	for(i=31;i>=0;i--)
	{
		arr[i]=n%2;
		n=n/2;
			
	}

	arr[31-p]=v;
	a=1;
	for(i=31;i>=0;i--)
	{
		num=arr[i]*a;
		b=num+b;
		a=a*2;
	}
	
	printf("%d",b);
		

return 0;
}
