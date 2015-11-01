#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int create_letter_distribution_diagram();
char text[10000];
int main(){
	
	fgets( text , 10000, stdin );
	create_letter_distribution_diagram();	
  return 0;
}

int create_letter_distribution_diagram(){
 int length = 0,helper1=0,helper3,helper4,helper5,helper6=0,sort,sort1,max;
	int alphabet_letters[26];
	char helper2, alphabet[26];
	
	for (helper3=0 ; helper3<26 ; helper3++){
           alphabet[helper3] = 'a' + helper3;
	}
		for (helper3=0 ;  helper3 < 26; helper3++)
		  alphabet_letters[helper3]=0;	 
             
		length = strlen ( text );
	
	
 		while ( helper1 < length){
			if ( text[helper1] >= 'a' && text[helper1] <= 'z'){
				helper2 = text[helper1];
				helper2 = helper2 - 'a'	;
				alphabet_letters[helper2] ++;
			
	
		   }   
		helper1++;               	
		}
		
		for (sort=0 ; sort < 26; sort++ ){
  	
		   max=sort;
		   for (sort1=sort+1 ; sort1 < 26 ; sort1++)
	    
		     if (alphabet_letters[max] < alphabet_letters[sort1])
		           max = sort1;

		        helper4 = alphabet_letters[max];
		        alphabet_letters[max] = alphabet_letters[sort];
		        alphabet_letters[sort] = helper4;
			
			helper4 = alphabet[max];
			alphabet[max] = alphabet[sort];
			alphabet[sort] = helper4;						
 		 }


	for (helper4 = 0 ; helper4 < 26 ; helper4++){
			
	
		for (helper6 = 0 ; helper6 < 26; helper6++){
				if (alphabet_letters[helper6] == alphabet_letters[helper6+1]){
				if (alphabet[helper6] > alphabet[helper6+1]){

						helper5 = alphabet[helper6];
						alphabet[helper6] = alphabet[helper6+1];
						alphabet[helper6+1] = helper5;
					}
				}
						
	 
		}


}
	helper3=0;
	while (helper3 < 26) {
		printf("%c-:-%d\n" ,alphabet[helper3], alphabet_letters[helper3]);
		helper3++;
	}
return 0;
}
