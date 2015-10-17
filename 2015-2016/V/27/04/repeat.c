#include<stdio.h>

int main()
{
	int a[50],b[50],n,m=0,p,i,t,u,v;
	printf("Enter Number: ");
	scanf("%d", &n);
	p=n;
	for(i=0; p>0; i++){
		a[i]=p%10;
		p=p/10;
	}
	for(t=0; t<i; t++){
		for(u=0; u<=i; u++){
			if(a[t]==a[u])
				m++;
		}
		b[t]=m;
		m=0;
		if(b[t]>1)
		printf("%d is Met %d Times in the Number %d \n", a[t],b[t],n);
	}
	return 0;
}
