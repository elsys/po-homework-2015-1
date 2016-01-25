#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	int number, size, count[50] , reckon ;
	scanf("%d", &size);
	
	for(number = 0 ; number < size ; number ++){
	scanf("%d", &count[number]);
	}
		for(number = 0 ; number < size ; number ++){
			for(reckon = 0 ; reckon < size ; reckon ++ ){
				if(count[number] == count[reckon] && number != reckon){
				 	break;	
				}
					if(reckon + 1 == size){	
						printf("\n\n\n%d",count[number]);
					}
			}
		}	
	printf("\n");
	return 0;
}
