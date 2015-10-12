#include<stdio.h>
	int main(){
	int n;//visochina
	int a;//osnova
		scanf("%d", &n);
		printf("%d\n",n);
		a=2*n-1;
		printf("%d\n",a);
		int i=1;
		int d=0;

		for(i=-1;i<a;i++){
			printf("\n");
		i++;
			for( d=0;d<=i;d++){
				printf("*");
			}

		}
		printf("\n");
return 0;
}
