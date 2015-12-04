#include <stdio.h>
#include <string.h>
#define stringlen 124

struct letter{
	char letter_id;
	int times_in_sentence;
};

struct letter alphabet[26];

int create_letter_distribution_diagram(char sentence[],int sentence_lenght);
int sort_structure();

int main(){
	int count_printer;
	char sentence[stringlen];
	scanf("%[^\n]s",sentence);
	int sentence_lenght = strlen(sentence);
	if(create_letter_distribution_diagram(sentence,sentence_lenght)){
		sort_structure();
	}

	for(count_printer = 0; count_printer < 26; count_printer++){
		printf("%c: %d\n", alphabet[count_printer].letter_id, alphabet[count_printer].times_in_sentence);
	}
	return 0;
}

int create_letter_distribution_diagram(char sentence[],int sentence_lenght){
	int count_letter;
	int count_sentence = 0;
	for(count_letter = 0; count_letter <= 25; count_letter++){
		alphabet[count_letter].letter_id = 'a' + count_letter;
		alphabet[count_letter].times_in_sentence = 0;
		for(count_sentence = 0; count_sentence < sentence_lenght; count_sentence++){
			if((*(sentence + count_sentence) == 'a' + count_letter) ||  (*(sentence + count_sentence) == 'A' + count_letter)){
				alphabet[count_letter].times_in_sentence++;
			}
		}
	}
	return 1;
}

int sort_structure(){
	int array_x;
	int array_y;
	int swap_times;
	char swap_name;
	for(array_x = 0; array_x < 26 ; array_x++){
		for(array_y = 0; array_y < 26 ;array_y++){
			if(alphabet[array_y].times_in_sentence < alphabet[array_x].times_in_sentence){
				swap_times = alphabet[array_x].times_in_sentence;
				alphabet[array_x].times_in_sentence = alphabet[array_y].times_in_sentence;
				alphabet[array_y].times_in_sentence =swap_times;
				swap_name = alphabet[array_x].letter_id;
				alphabet[array_x].letter_id = alphabet[array_y].letter_id;
				alphabet[array_y].letter_id = swap_name;

			}
			else if(alphabet[array_y].times_in_sentence == alphabet[array_x].times_in_sentence){
				if(alphabet[array_y].letter_id > alphabet[array_x].letter_id){
					swap_name = alphabet[array_x].letter_id;
					alphabet[array_x].letter_id = alphabet[array_y].letter_id;
					alphabet[array_y].letter_id = swap_name;

				}
			}
		}
	}
	return 1;
}
