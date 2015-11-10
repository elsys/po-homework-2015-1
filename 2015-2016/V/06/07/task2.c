#include <stdio.h>
void next_generation(int *, int *, int);

int main(){
	int lenght, i=0;
	int current[20];
	int next[20];
	scanf("%d", &lenght);
	for(i=0;i<lenght;i++){
		scanf("%d ", &current[i]);
	}
	int alive=0;
	do{
		alive=0;
		for(i=0;i<lenght;i++){
			if(current[i]==1){
				alive=1;
				break;
			}
			
		}
		for(i=0;i<lenght;i++){
			if(current[i]==0){
				printf(".");
			}
				
			if(current[i]==1){
				printf("*");		
			}
			
		}
		printf("\n");
		next_generation(current, next, length);
		for(i=0;i<lenght;i++){
			current[i]=next[i];//Zapisvame nomera na vsiaka kletka;
		}
	}while(alive==1);

}

void next_generation(int *current, int *next, int length){
	int i; 
	current[0]=next[0];
	next[length-1]=current[lenght-1];
	for(i=0;i<length-1;i++){
		if(current[i-1]==1 && current[i+1]==1){
			if(current[i-1]==0 && current[i+1]==0{
				next[i]=0;
			}
		
		}
		else{
			next[i]=1;
		}	
	}
}
