#include <stdio.h>

int main(){
	int a[4][4],i=0,j=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}//Enter;
	int h;
	for(i=1;i<4;i++){
		for(j=0;j<i;j++){
			h=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=h;		
		}
	}//transpose;	
	for(i=0;i<4;i++){
		printf("\n");
		for(j=0;j<4;j++){
			printf("%2d ",a[i][j]);	
		}	
	}//print transposed result;
}
