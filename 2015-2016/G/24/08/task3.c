#include <stdio.h>

int main(){

	int count_d,count_cd,check,deers,deer[200]; // count_deers, count_checkdeers
 	
 	do{
		scanf("%d" , &deers);

 	}while(deers%2 == 0);
 	
 	for(count_d = 0; count_d < deers; count_d++){
 	
 		scanf("%d", &deer[count_d]);
 		
 		for(count_cd = 0, check = 1; count_cd < count_d; count_cd++){
 			
 			if(deer[count_d] == deer[count_cd]){
 				
 				check++;
 				
 			}if(check > 2){
 					
 				return 0; 
 				
 			}
 			
 		}
 			
 	} 
 			
	for(count_d = 0; count_d < deers; count_d++){
	
		check = 0;
		
		for(count_cd = 0; count_cd < deers; count_cd++){
		
			if(deer[count_d] == deer[count_cd]){
			
				check++;
				
			}
			
		}
		
		if(check == 1){
		
			printf("%d \n", deer[count_d]); break;
			
		} 
	
	}

}
