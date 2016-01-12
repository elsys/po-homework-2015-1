#include <stdio.h>

int main(){

	int n,i,ideer,check,deers[200];
	
 	do{
 	
		scanf("%d" , &n);

 	}while(n%2 == 0);
 	
 	for(i = 0;i < n;i++){
 	
 		scanf("%d", &deers[i]);
 		
 		for(ideer = 0,check = 1;ideer < i;ideer++){
 			
 			if(deers[i] == deers[ideer]){
 					
 					check++;
 				
 				}if(check > 2){
 					return 0; 
 				}
 			}	
 	} 		
	for(i = 0;i < n;i++){
		
		for(ideer = 0,check = 0;ideer < n;ideer++){
			if(deers[i] == deers[ideer]){
				check++;
				
			}
		}
		if(check == 1){
			printf("%d \n", deers[i]); break;
		} 
	
	}

}
