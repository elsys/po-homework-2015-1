#include <stdio.h>
int main (){
	int n, i, m, a, b, o;
	printf("n="); scanf("%d", &n);
	a=0;
	for(i=0; i<10; i++){
	b=n;
		while(b>0){
		m=b%10;
		b=b/10;

		if(i==m) a=a+1;

		}
		printf("\n %d %d", i, a);
		a=0;
	}


	return 0;
}
