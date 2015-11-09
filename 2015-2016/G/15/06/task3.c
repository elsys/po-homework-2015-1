#include <stdio.h>
#include <string.h>



int create_letter_distribution_diagram(char sentence[50], int letters[26][2]);

int main(){

	char sentence[50];
	int letters[26][2];

	scanf("%[^\n]s", sentence);

	create_letter_distribution_diagram(sentence,letters);

	return 0;

}

int create_letter_distribution_diagram(char sentence[50], int letters[26][2]){
int counter = 0,lines,ascii = 97,acode,sort;
	for(lines = 0;lines < 26;lines++){
		letters[lines][0] = ascii + lines;
		letters[lines][1] = 0;
	}

	while(counter < strlen(sentence)){	
		acode = sentence[counter];
	
		for(lines = 0;lines < 26;lines++){
			
			if(acode == letters[lines][0] || acode == letters[lines][0] - 32){
				letters[lines][1]++;
			}		
			
		}counter++;
	}
	for(lines = 0;lines < 26;lines++){
		for(counter = 0;counter < 26;counter++){
			if(letters[lines][1] > letters[counter][1]){
				sort = letters[lines][0];
				letters[lines][0] = letters[counter][0];
				letters[counter][0] = sort;
				
				sort = letters[lines][1];
				letters[lines][1] = letters[counter][1];
				letters[counter][1] = sort;
			}else if(letters[lines][1] == letters[counter][1]){
				if(letters[lines][0] < letters[counter][0]){
					sort = letters[lines][0];
					letters[lines][0] = letters[counter][0];
					letters[counter][0] = sort;
				
					sort = letters[lines][1];
					letters[lines][1] = letters[counter][1];
					letters[counter][1] = sort;				
				}
			}
		}
	}
	for(lines = 0;lines < 26;lines++){
		printf("%c: %d \n", letters[lines][0],letters[lines][1]);
	}	
	
	return 0;

}
