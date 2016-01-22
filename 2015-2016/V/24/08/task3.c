#include <stdio.h>


int main(){
int num,counter,check,counterarr,arr[200];
 do{
	scanf("%d" , &num);

 }while(num%2 == 0);
 	for(counter = 0;counter < num;counter++){
 		scanf("%d", &arr[counter]);
 			for(counterarr = 0,check = 1;counterarr < counter;counterarr++){
 				if(arr[counter] == arr[counterarr]){
 					check++;
 				
 				}if(check > 2){
 					return 0; 
 				}
 			}	
 	} 		
	for(counter = 0;counter < num;counter++){
		check = 0;
		for(counterarr = 0;counterarr < num;counterarr++){
			if(arr[counter] == arr[counterarr]){
				check++;
				
			}
		}
		if(check == 1){
			printf("%d \n", arr[counter]); break;
		} 
	
	}

}
