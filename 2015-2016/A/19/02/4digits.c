#include <stdio.h>

int main()
{
	int n,c,array[10],i,check=0,copy;	

	printf("Enter number:"); scanf("%d", &n);
	
	copy=n;
	for(i=0;copy>0;i++) copy/=10;
        for(;i>0;i--) c=c*10;
        i=c;
	if(n/i==0) printf("Numbers don't start with 0. \nNote: these zeros will be ommited.\n\n");

	for(i=0; i<10; i++)
		array[i]=0;	
	while(n!=0)
	{
		c=n%10;
		array[c]++;
		n/=10;
	}
	for(i=0; i<10; i++)
		if(array[i]!=0) printf("%d: %d\n", i, array[i]);

	return 0;
}
