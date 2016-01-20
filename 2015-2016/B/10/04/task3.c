#include <stdio.h>
#include <string.h>

void create_letter_distribution_diagram(char*);

int number[26];
char symbols[26];


int main () {

	char EntryText[4000];
	
	scanf("%[^\n]s",EntryText);	

	create_letter_distribution_diagram(EntryText);	
		
	return 0;
}
void create_letter_distribution_diagram(char* Ent) {

	int counter,swap;

	int sort_counter1,sort_counter2;

	int num_swap;

	int length,temp;

	char sym_swap;

	for (counter = 0; counter < 26; counter++) {
			
			symbols[counter] = 'a' + counter;
	}

	length = strlen(Ent);

	for (counter = 0; counter < length; counter++) {
			if(Ent[counter] >= 97 && Ent[counter] <= 122) {
				temp = Ent[counter] - 'a';
				number[temp] = number[temp] + 1;
			}
			if(Ent[counter] >= 65 && Ent[counter] <= 90) {
				temp = Ent[counter] - 'A';
				number[temp] = number[temp] + 1;
			}
		}
		 

	for (sort_counter1 = 0; sort_counter1 < 26; sort_counter1++) {

		for (sort_counter2 = sort_counter1 + 1; sort_counter2 < 26; sort_counter2++) {

			if (number[sort_counter2] > number[sort_counter1]) {
				num_swap = number[sort_counter1];
				number[sort_counter1] = number[sort_counter2];
				number[sort_counter2] = num_swap;				
			
			
			
				sym_swap = symbols[sort_counter1];
				symbols[sort_counter1] = symbols[sort_counter2];
				symbols[sort_counter2] = sym_swap;
				
			}


			if (number[sort_counter2] == number[sort_counter1]) {
				if(symbols[sort_counter2] < symbols[sort_counter1]) {				
				swap = symbols[sort_counter2];
				symbols[sort_counter2] = symbols[sort_counter1];
				symbols[sort_counter1] = swap;
				}
			}
		
		}
	}
	
	
	for (counter = 0; counter < 26; counter++) {
		printf("%c : %d\n",symbols[counter],number[counter]);
	}
}
