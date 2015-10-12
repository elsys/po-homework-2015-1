#include<stdio.h>
int main()
{
	int n,m=0,i=0,t=0,p=0,a[100];
	printf("\n Enter Number: ");
	scanf("%d", &n);
	while(n!=0){
		a[i]=n%10;
		i++;
		n=n/10;
	}
	while(m<=9){
		t=0;
		p=0;
		while(t<=i){
			if(a[t]==m)
				p++;
			t++;
		}
		if(p!=0)
			printf("\n %d is met %d times in the number. \n",m,p);
		m++;
	}
	return 0;
}
