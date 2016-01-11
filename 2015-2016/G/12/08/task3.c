#include <stdio.h>

int main(){

int deer[200];
int counter_1, counter_2, pairs, deers;

	do{

		scanf("%d", &deers);

	}while(deers%2 == 0);

	for(counter_1 = 0; counter_1 < deers; counter_1++){

		scanf("%d", &deer[counter_1]);

		for(counter_2 = 0, pairs = 1; counter_2 < counter_1; counter_2++){

			if(deer[counter_1] == deer[counter_2]){
		
				pairs++;
		
			}
			
			if(pairs>2){
		
				return 0;
		
			}

		}

	}

	for(counter_1 = 0; counter_1 < deers; counter_1++){

		for(counter_2 = 0, pairs = 0; counter_2 < deers; counter_2++){

			if(deer[counter_1] == deer[counter_2]){
		
				pairs++;
		
			}

		}
		
		if(pairs == 1){
		
			printf("%d \n", deer[counter_1]); 
			break;
		
		}

	}

	return 0;
	
}
