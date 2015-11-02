#include <stdio.h>
#include <string.h>

#define ASCII_LOWER 65 
#define ASCII_UPPER 97

int create_letter_distribution_diagram(char fill_from[100], int fill_in[26][3]);

int main(){

	char sentence[100];
	int diagram[26][3];

	scanf("%[^\n]s", sentence);

	create_letter_distribution_diagram(sentence,diagram);

	return 0;

}

int create_letter_distribution_diagram(char fill_from[100], int fill_in[26][3]){

	int row,count,ascii_code,sort;

	for(row = 0; row < 26; row++){

		fill_in[row][0] = ASCII_LOWER + row;
		fill_in[row][1] = ASCII_UPPER + row;
		fill_in[row][2] = 0;

	}

	for(count = 0; count < strlen(fill_from); count++){

		ascii_code = fill_from[count];

		for(row = 0; row < 26; row++){

			if( ascii_code == fill_in[row][0] || ascii_code == fill_in[row][1] ){

				fill_in[row][2]++;

			}

		}

	}

	for(row = 0; row < 26; row++){

		for(count = 0; count < 26; count++){

			if(fill_in[row][2] > fill_in[count][2]){

				sort = fill_in[row][0];
				fill_in[row][0] = fill_in[count][0];
				fill_in[count][0] = sort;

				sort = fill_in[row][1];
				fill_in[row][1] = fill_in[count][1];
				fill_in[count][1] = sort;

				sort = fill_in[row][2];
				fill_in[row][2] = fill_in[count][2];
				fill_in[count][2] = sort;

			}else if(fill_in[row][2] == fill_in[count][2]){

				if(fill_in[row][1] < fill_in[count][1]){

					sort = fill_in[row][0];
					fill_in[row][0] = fill_in[count][0];
					fill_in[count][0] = sort;

					sort = fill_in[row][1];
					fill_in[row][1] = fill_in[count][1];
					fill_in[count][1] = sort;

					sort = fill_in[row][2];
					fill_in[row][2] = fill_in[count][2];
					fill_in[count][2] = sort;

				}

			}

		}

	}

	for(row = 0; row < 26; row++){

		printf("%c: %d \n", fill_in[row][1], fill_in[row][2]);

	}

	return 0;

}
