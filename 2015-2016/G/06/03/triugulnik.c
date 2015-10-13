#include <stdio.h>

int main() {
int p,n,i;
printf("Vavedi n: ");
scanf("\n%d", &n);
for(i=0;i<=n;i++) {
	for(p=0;p<i;p++) {
		printf("0");
		}
	printf("\n");
	}

}
