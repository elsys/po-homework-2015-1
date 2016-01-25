#include <stdio.h>
void next_generation(int*, int* , int);

int main(){
	int n, i=0;
	int current[20];
	int next[20];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &current[i]);
	}
	int alive=1;
	do{
		alive=0;
		for(i=0;i<n;i++){
			if(current[i]==1){
				alive=1;
				break;
			}
		}
		for(i=0;i<n;i++){
			if(current[i]==0){
				printf(".");
			}
				
			if(current[i]==1){
				printf("*");		
			}

		}
		printf("\n");
		next_generation(current, next, n);
		for(i=0;i<n;i++){
			current[i]=next[i];//Zapisvame nomera na vsiaka kletka;
		}
	}while(alive==1);
	return 0;
}

void next_generation(int *current, int *next, int length){
	int i; 
	next[0]=current[0];
	next[length-1]=current[length-1];
	for(i=0;i<length-1;i++){
		if((current[i-1]==1 && current[i+1]==1)||
		  (current[i-1]==0 && current[i+1]==0)){
				next[i]=0;
		}
		else{
			next[i]=1;
		}	
	}
}
