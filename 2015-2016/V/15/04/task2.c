#include <stdio.h>

int isMagic(int*[], int);

int main() {

	int n, i = 0, j;
	do
		scanf("%d",&n);//scanf("%d",({printf("Enter how much rows by colons do you want(1 number rows = colons):"); &n;}));
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
			printf("\t%d ", square[i][j]);
		printf("\n");
	}

	if(!isMagic((int**)square, n))
        printf("Your square indeed is magic!\n");
    else
        printf("Sorry but your square isn't magic!\n");

    return 0;
}

int isMagic(int *square[], int n) {

    int i, j, x = 0, y = 0;

	for(i = 0; i < n; i++)
		x+=*((int* )square + i*n + i);
	for(i = 0, j = n - 1; i < n; i++, j--)
		y+=*((int *)square + j*n + i);
	if(x == y) {
		for(j = 0, y = x; j < n; j++) {
			for(i = 0, x = 0; i < n; i++)
				x+=*((int* )square + j*n + i);
			if(x==y);
			else goto NOT_MAGIC;
			for(i = 0, x = 0; i < n; i++)
				x+=*((int* )square + i*n + j);
            if(x != y) goto NOT_MAGIC;
		}
		goto MAGIC;
	}
	else goto NOT_MAGIC;

	MAGIC:
		return 0;
	NOT_MAGIC:
		return 1;

}

/*
[0][0] [0][1] [0][2]
[1][0] [1][1] [1][2]
[2][0] [2][1] [2][2]

*/
