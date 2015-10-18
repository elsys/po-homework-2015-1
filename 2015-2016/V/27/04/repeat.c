#include<stdio.h>

int main()
{
	int a[50],b[50],c[50],d[50],m=0,i,t,u,v=0,o;
	long long int n,p;
	printf("\n");
	printf("  Enter Number: ");
	scanf("%lli", &n);
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
		if(b[t]>1){
			o=t;
			while(o>=0){
				if(a[t]==c[v]) break;
				else {
					v++;
					c[v]=a[t];
					d[v]=b[t];
				}
			o--;
			}
		}
	}
	if(v>0){
		for(; v>0; v--){
			printf("  %d is Met %d Times in the Number %lli \n", c[v],d[v],n);
		}
	}
	else
		printf("  Everything in the Number %lli is Met Only Once \n", n);
	printf("\n");
	return 0;
}
