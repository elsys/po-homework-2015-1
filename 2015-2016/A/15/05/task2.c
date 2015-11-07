#include <stdio.h>

int checkForLiving(int *generation, int length) {
	int i;
	for(i=0; i<length; i++){
		if(generation[i]){
			return 1;
		}
	}
	return 0;
}

void printGeneration(int *generation, int length) {
	int i;
	for(i=0; i<length; i++){
		if(generation[i]==0){
			printf("%c", '.');
		}
		else{
			printf("%c", '*');
		}
	}
	printf("\n");
}

void next_generation(int *current, int *next, int length){
	int i;
	
	next[0]=0;
	next[length-1]=0;
	for(i=1; i<length-1; i++){
		if(!(current[i+1] && current[i-1]) && (current[i+1] || current[i-1])){
			next[i] = 1;
		}
		else{
			next[i] = 0;
		}
	}
	
	for(i=0; i<length; i++) {
		current[i]=next[i];
	}
}

int main(){
	int n, curGen[20], nextGen[20], i;
	do{
		scanf("%d", &n);
	}while(n < 0 && n > 20);
	
	/*NOTE: program forces user to re-enter if he inputs something invalid and i dont know how the script checks homeworks and could potentially cause a bug with a given input (21 0 1 0 1.. so on) */
	
	i=0;
	while(i<n){
		scanf("%d", &curGen[i]);
		if((curGen[i] != 0 && curGen[i] != 1) || (curGen[i] == 1 && (i == 0 || i == n-1))){
			continue;
		}
		i++;
	}
	
	i=0;
	printGeneration(curGen, n);
	do{
		next_generation(curGen, nextGen, n);
		printGeneration(curGen, n);
	}while(i<1000 && checkForLiving(nextGen, n));
	
	return 0;
}
