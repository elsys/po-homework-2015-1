#include<stdio.h>

int main()
{
	int a[4][4],b[4][4],m,n,i=1;
	printf("\n\t Enter Numbers: \n");
	for(m=0; m<4; m++){
		for(n=0; n<4; n++){
			printf("\n Cell %d: ", i);
			scanf("%d", &a[m][n]);
			i++;
		}
	}
	for(m=0; m<4; m++){
		for(n=0; n<4; n++){
			b[n][m]=a[m][n];
		}
	}
	printf("\n\t The Transpose is: \n");
	for(m=0; m<4; m++){
		printf("\n");
		for(n=0; n<4; n++){
			printf("\t %d \t", b[m][n]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
