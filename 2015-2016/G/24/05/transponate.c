#include<stdio.h>

int main(){

int i,j,nums[4][4],transponated[4][4];

for(i=0;i<4;i++){

	for(j=0;j<4;j++){

		scanf("%d", &nums[i][j]);

	}


}

for(i=0;i<4;i++){

	for(j=0;j<4;j++){

		transponated[j][i] = nums[i][j];

	}


}

for(i=0;i<4;i++){

	for(j=0;j<4;j++){

		printf("%d ", transponated[i][j]);

	}

	printf("\n");

}


return 0;

}
