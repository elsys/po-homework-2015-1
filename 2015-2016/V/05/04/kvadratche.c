#include <stdio.h>
 int main(){
 	int kvadrat[3][3],b,a,sum;
 	for(a=0 ; a < 3; a++){
 		for(b = 0; b < 3; b++){
 			scanf("%d",&kvadrat[a][b]);
 		}
 	}
 	for(a=0 ; a < 3; a++){
 		for(b = 0; b < 3; b++){
 			printf("%d",kvadrat[a][b]);
 		}
 		printf("\n");
 	}
 	sum = kvadrat[0][0] + kvadrat[0][1] + kvadrat[0][2];
 	for(a = 0 ; a < 3 ; a++){//proverqva sumata na reda
 		if(sum != kvadrat[a][0] + kvadrat[a][1] + kvadrat[a][2]){
			printf("No its not magical kvadratche.1\n");
			printf("No its not magical kvadratche \n");
 			return 0;
 		}
 	}
 	for(a = 0 ; a < 3 ; a++){//proverqva sumata na reda
 		if(sum != kvadrat[0][a] + kvadrat[1][a] + kvadrat[2][a]){//vertikalni
			printf("No its not magical kvadratche.2\n");
			printf("No its not magical kvadratche\n");
 			return 0;
 		}
 	}
 	if(sum != kvadrat[0][0] + kvadrat[1][1] + kvadrat[2][2]){//diagonal
		printf("No its not magical kvadratche.3 \n");
		printf("No its not magical kvadratche\n");
 		return 0;
 	}
 	if(sum != kvadrat[0][2] + kvadrat[1][1] + kvadrat[2][0]){//diagonal
		printf("No.4\n");

		printf("No its not magical kvadratche\n");
 		return 0;
 	}
 	printf("Yes it is a magical kvadratche.\n");
 }
