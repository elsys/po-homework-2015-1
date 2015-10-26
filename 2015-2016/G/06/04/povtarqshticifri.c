#include<stdio.h>

int main() {
	int i,n,j;
	int a[10] = {0,0,0,0,0,0,0,0,0,0,};
	printf("Vavedi chislo: ");
	scanf("\n%d",&n);
	for(i=0;i<10;i++) {
		while(n!=0) {
			j=n%10;
			a[j]++;
			n=n/10;
		}
	

	}
	for(i=0;i<10;i++) {
	if(a[i]>=2) {
		printf("\nPovtarq se! \n>> %d\n",i);
		}
	}
	return 0;
}
