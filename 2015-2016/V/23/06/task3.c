#include <stdio.h>
#include <string.h>



int create_letter_distribution_diagram(char izrechenie[50]){
	int alphabet[26][2];
	int counter = 0,lines,ascii = 97,asciicode,tmp;
		for(lines = 0;lines < 26;lines++){
			alphabet[lines][0] = ascii + lines;
			alphabet[lines][1] = 0;
		}

		while(counter < strlen(izrechenie)){	
			asciicode = izrechenie[counter];
		
			for(lines = 0;lines < 26;lines++){
				
				if(asciicode == alphabet[lines][0] || asciicode == alphabet[lines][0] - 32){
					alphabet[lines][1]++;
				}		
				
			}counter++;
		}
		for(lines = 0;lines < 26;lines++){
			for(counter = 0;counter < 26;counter++){
				if(alphabet[lines][1] > alphabet[counter][1]){
					tmp = alphabet[lines][0];
					alphabet[lines][0] = alphabet[counter][0];
					alphabet[counter][0] = tmp;
					
					tmp = alphabet[lines][1];
					alphabet[lines][1] = alphabet[counter][1];
					alphabet[counter][1] = tmp;
				}else if(alphabet[lines][1] == alphabet[counter][1]){
					if(alphabet[lines][0] < alphabet[counter][0]){
						tmp = alphabet[lines][0];
						alphabet[lines][0] = alphabet[counter][0];
						alphabet[counter][0] = tmp;
					
						tmp = alphabet[lines][1];
						alphabet[lines][1] = alphabet[counter][1];
						alphabet[counter][1] = tmp;				
					}
				}
			}
		}
		for(lines = 0;lines < 26;lines++){
			printf("%c: %d \n", alphabet[lines][0],alphabet[lines][1]);
		}	
		
		return 0;

}

int main(){

	char izrechenie[1000];

	scanf("%[^\n]s", izrechenie);

	create_letter_distribution_diagram(izrechenie);

	return 0;

}