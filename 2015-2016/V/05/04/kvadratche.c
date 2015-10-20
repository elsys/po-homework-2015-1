#include <stdio.h>
 int main(){
 	int kvadrat[3][3],k,i,sum;
 	for(i=0 ; i < 3; i++){
 		for(k = 0; k < 3; k++){
 			scanf("%d",&kvadrat[i][k]);
 		}
 	}
 	for(i=0 ; i < 3; i++){
 		for(k = 0; k < 3; k++){
 			printf("%d",kvadrat[i][k]);
 		}
 		printf("\n");
 	}
 	sum = kvadrat[0][0] + kvadrat[0][1] + kvadrat[0][2];
 	for(i = 0 ; i < 3 ; i++){//proverqva sumata na reda
 		if(sum != kvadrat[i][0] + kvadrat[i][1] + kvadrat[i][2]){
			printf("No.1 \n");
			printf("No \n");
 			return 0;
 		}
 	}
 	for(i = 0 ; i < 3 ; i++){//proverqva sumata na reda
 		if(sum != kvadrat[0][i] + kvadrat[1][i] + kvadrat[2][i]){//vertikalni
			printf("No.2\n");
			printf("No\n");
 			return 0;
 		}
 	}
 	if(sum != kvadrat[0][0] + kvadrat[1][1] + kvadrat[2][2]){//diagonal
		printf("No.3\n");
		printf("No\n");
 		return 0;
 	}
 	if(sum != kvadrat[0][2] + kvadrat[1][1] + kvadrat[2][0]){//diagonal
		printf("No.4\n");

		printf("No\n");
 		return 0;
 	}
 	printf("Yes.\n");
 }
