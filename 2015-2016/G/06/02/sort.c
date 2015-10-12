#include <stdio.h>

int main() {
int b,i,c,a; i=0;
int n[1000];
for(i=0; i<1000 ;i++) {
	printf("Vavedi chislo: ");
	scanf("%d", &n[i]);
	if(n[i]==42) {
		break;
	}
}
for(a=0; a<i; a++) {
	for(b=i-1;b>a; b--) {
		if(n[b-1] > n[b]) {
			c=n[b-1];
			n[b-1]=n[b];
			n[b]=c;		
		}
	}
}
for(c=0;c<i;c++) {
	printf("%d\n", n[c]);
}
return 0;
}
