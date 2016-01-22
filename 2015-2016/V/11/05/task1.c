#include <stdio.h>

int main(){
	int a[4][4],i=0,k=0;
	for(i=0;i<4;i++){
		for(k=0;k<4;k++){
			scanf("%d",&a[i][k]);
		}
	}
	int h;
	for(i=1;i<4;i++){
		for(k=0;k<i;k++){
			h=a[i][k];
			a[i][k]=a[k][i];
			a[k][i]=h;
		}
	}
	for(i=0;i<4;i++){
		printf("\n");
		for(k=0;k<4;k++){
			printf("%2d ",a[i][k]);
		}
	}
}

