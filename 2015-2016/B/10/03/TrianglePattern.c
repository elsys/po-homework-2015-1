#include<stdio.h>

int main () {

	int n,sp,br,j;

	printf("Vuvedi visochina na triugulnika =  ");scanf("%d",&n);

	sp=n;

	for(br = 0; br <= n;br++)
		{
			for(j = 1;j <= sp;j++) printf(" ");

			sp = sp - 1;				
	
			for(j = 1;j < 2*br;j++) printf("#");
			printf("\n");		
		}
	return 0;
}
