#include <stdio.h>

#define ASCII_LOWER 65
#define ASCII_UPPER 97

int create_letter_distribution_diagram(char fill_from[100], int fill_in[26][3]);
int print_letter_distribution_diagram(int print[26][3]);

int main(){

	char sentence[100];
	int diagram[26][3];

	scanf("%[^\n]s", sentence);

	create_letter_distribution_diagram(sentence,diagram);

	return 0;

}

int create_letter_distribution_diagram(char fill_from[100], int fill_in[26][3]){

	int row,col;

	for(row = 0; row < 26; row++){

		fill_in[row][0] = ASCII_LOWER + row;
		fill_in[row][1] = ASCII_UPPER + row;
		fill_in[row][2] = 0;
	
	}

	for(row = 0; row < 26; row++){

		printf("diagram[%d, %d, %d] \n", fill_in[row][0], fill_in[row][1], fill_in[row][2]);
	
	}

	return 0;

};

int print_letter_distribution_diagram(int print[26][3]){

	return 0;

};
