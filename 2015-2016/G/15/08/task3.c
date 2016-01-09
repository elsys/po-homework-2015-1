#include <stdio.h>


int main(){
int number,counter,check,counterdeer,deer[200];
 do{
	scanf("%d" , &number);

 }while(number%2 == 0);
 	for(counter = 0;counter < number;counter++){
 		scanf("%d", &deer[counter]);
 			for(counterdeer = 0,check = 1;counterdeer < counter;counterdeer++){
 				if(deer[counter] == deer[counterdeer]){
 					check++;
 				
 				}if(check > 2){
 					return 0; 
 				}
 			}	
 	} 		
	for(counter = 0;counter < number;counter++){
		check = 0;
		for(counterdeer = 0;counterdeer < number;counterdeer++){
			if(deer[counter] == deer[counterdeer]){
				check++;
				
			}
		}
		if(check == 1){
			printf("%d \n", deer[counter]); break;
		} 
	
	}

}
