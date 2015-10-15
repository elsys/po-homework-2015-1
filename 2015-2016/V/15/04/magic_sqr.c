#include <stdio.h>

int main() {

	int n, i = 0, j = 0, x = 0, y = 0;	
	do
		scanf("%d",({printf("Enter how much rows by colons do you want(1 number rows = colons):"); &n;}));
	while(n <= 2 || n >= 10);
	int square[n][n]; //= { 0 };
	printf("Farewell!Now enter the values of you own %d by %d square:\n",n,n);
	for(; i < n; i++) {
		for(j = 0; j < n; j++) {
			scanf("%d%*c",&square[i][j]);
		}
		printf("\n");
	}
	
	
	printf("Your \"magic square\" should look like this:\n");
	for(i=0 ;i < n; i++) {
		for(j = 0; j < n; j++)
			printf("%d ", square[i][j]);
		printf("\n");
	}

	for(i = 0; i < n; i++)
		x+=square[i][i];
	for(i = 0, j = n - 1; i < n; i++, j--)
		y+=square[j][i];
	if(x == y) {
		for(j = 0, y = x; j < n; j++) {
			for(i = 0, x = 0; i < n; i++)
				x+=square[j][i];
			if(x==y);
			else goto NOT_MAGIC;	
			for(i = 0, x = 0; i < n; i++)
				x+=square[i][j];
			if(x != y) goto NOT_MAGIC;
		}
		goto MAGIC;
	}
	else goto NOT_MAGIC;
	
	MAGIC:
		printf("Your square indeed is magic!\n");
		return 0;
	NOT_MAGIC:
		printf("Sorry but your square isn't magic!\n");
		return 1;
}

/*
[0][0] [0][1] [0][2]
[1][0] [1][1] [1][2]
[2][0] [2][1] [2][2]

*/
