#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void next_generation(int *, int *, int );
int end = 0,max=0;
int length;
int main(){
	int  current[20], next[20] , helper;
        
	scanf( "%d", &length );
	for(helper = 0 ; helper < length ; helper++)
	scanf( "%d", &current[helper] );
	while(end != 1){
	next_generation( current , next , length);
     }
return 0;
}

void next_generation(int *current, int *next, int length){
	int helper1 = 0 , helper2 = 0, helper3 = 0;
		
		 for (helper1 = 0; helper1 < length ; helper1++){
			if (helper1 == 0) *(next + helper1) = 0;
				if (helper1 + 1== length){ 
					*(next + helper1) = 0;
					
		}
if ( *(current + helper1 - 1) == *(current + helper1 + 1)) *(next + helper1) = 0; 
if ( *(current + helper1 - 1) != *(current + helper1 + 1) && helper1 + 1 != length && helper1 != 0) *(next + helper1) = 1;
			
	}	
		for (helper3 = 0; helper3 < length ; helper3++){
			if ( *(next + helper3) == 0 ){ printf(". "); *(current + helper3) = 0;}
			if ( *(next + helper3) == 1 ){ printf("* "); *(current + helper3) = 1;}	
			}
	
		while ( *(next + helper2) == 0){
					
					if (helper2 + 1  == length) {
						end = 1;
					}
			helper2 ++;
		}		 

                        helper1 = 0;
                        printf("\n");	
			max ++ ;
			if ( max == 1000) end = 1;
}
