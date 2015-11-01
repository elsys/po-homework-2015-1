#include <stdio.h>
#include <string.h>

void create_letter_distribution_diagram();

struct Diagram_struct{
	char character;
	int occurences;
}diagram[26];

int main(){
	
	create_letter_distribution_diagram();
	
	return 0;

}

void create_letter_distribution_diagram(){
	int i, l, temp;
	char ch, str[200], tempchar; 
	
	for(i = 0; i < 26; i++){
		diagram[i].character = 'a' + i;
		diagram[i].occurences = 0;
	}
	
	for(i=0; 1; i++){
		ch=getchar();
		
		if(ch == EOF){
			break;
		}
		else{
			str[i] = ch;
		}
	}
	
	for(i=0; i<strlen(str); i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] -= 'A' - 'a';
		}
		if(str[i] >= 'a' && str[i] <= 'z'){
			diagram[(str[i] - 'a')].occurences++;
		}
	}
	
	for (i = 0; i < (26 - 1); i++){
		for (l = 0; l < 26 - i - 1; l++) {
			if(diagram[l].occurences < diagram[l+1].occurences){
				temp = diagram[l].occurences;
				tempchar = diagram[l].character;
				diagram[l].occurences = diagram[l+1].occurences;
				diagram[l+1].occurences = temp;
				diagram[l].character = diagram[l+1].character;
				diagram[l+1].character = tempchar;
			}
			else if(diagram[l].character < diagram[l+1].character && diagram[l].occurences == diagram[l+1].occurences){ /*Sorts the rest alphabetically if they have equal occurences*/
				temp = diagram[l].occurences;
				tempchar = diagram[l].character;
				diagram[l].occurences = diagram[l+1].occurences;
				diagram[l+1].occurences = temp;
				diagram[l].character = diagram[l+1].character;
				diagram[l+1].character = tempchar;
			}
		}
	}
	
	for(i=0; i<26; i++){
		printf("%c: %d\n", diagram[i].character, diagram[i].occurences);
	}
}
