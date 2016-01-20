#include <stdio.h>

void next_generation(int *next, int *current, int length);
int main(){
int n,j,i,check,current[20],next[20];
scanf("%d", &n);
	while(n < 0 || n > 20){
		scanf("%d", &n);
	}
	do{	

		for(i = 0;i < n;i++){
		scanf("%d", &current[i]);
		}
	
	}while(current[0] != 0 || current[n-1] != 0);

	for(j = 0;j < 1000;j++){
		check = 0;		
			for(i = 0;i < n-1;i++){
				if(current[i] == 0){
					printf(".");
				}else{
					printf("*");
				}

			} printf(" \n");		

		next_generation(&next[0],&current[0],n);
			for(i = 0;i < n-1;i++){
				if(current[i] != 0){
					check = 1;
					break;
				}
			
			}
			if(check != 1){
				for(i = 0;i < n-1;i++){
					if(current[i] == 0){
						printf(".");
					}else{
						printf("*");
					}

				}printf(" \n");							
				break;
			}
	}

}
void next_generation(int *next, int *current, int length){
int i;
	*next = 0;
	*(next + length - 1) = 0;
	for(i = 1;i < length - 1;i++){
		if( *(current + i -1) == *(current + i +1)){
			*(next + i) =0;
		}else{*(next + i) = 1;
		}
	}

	for(i = 0;i < length;i++){
		*(current + i) = *(next + i);
	}


}
