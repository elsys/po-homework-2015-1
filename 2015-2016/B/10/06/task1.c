#include <stdio.h>
#include <string.h>
#define BASE 16

typedef struct {
	
	int red,green,blue;

}RGB;

RGB color;

void hexadecimal_to_dec();
void decimal_to_hex();
int return_letters_in_string(char);

int main () {

	char inputLetter;

	inputLetter = getchar();
	getchar();
	switch(inputLetter) {
		case 'h':hexadecimal_to_dec();break;
		case 'd':decimal_to_hex();break;	
		default:printf("Only h or d is correct\n");break;
	}

	return 0;
}

void hexadecimal_to_dec() {
	
	char hex[7];
	int counter = 1,length;
	int integer_num = 0;

	length = strlen(hex);

	scanf("%[^\n]s",hex);

	for (counter = 1;counter <= length;counter++) {

		if (counter == 1 || counter == 3 || counter == 5) integer_num = return_letters_in_string(hex[counter])*BASE;
		else if(counter %2 == 0) {
			integer_num = integer_num + return_letters_in_string(hex[counter]);
			switch(counter) {
				case 2:color.red = integer_num;break;
				case 4:color.green = integer_num;break;
				case 6:color.blue = integer_num;break;
			}
		}	
	}

	printf("rgb(%d, %d, %d)\n",color.red,color.green,color.blue);
}

void decimal_to_hex() {

	int first_remainer = 0;

	int second_remainer = 0;
	
	char hex_num[7];

	scanf("%d, %d, %d",&color.red,&color.green,&color.blue);

	first_remainer = color.blue % BASE;
	second_remainer = (color.blue - first_remainer)/BASE;

	if (first_remainer >= 0 && first_remainer <= 9) hex_num[6] = first_remainer + 48;
	if (first_remainer >= 10 && first_remainer <= 15) hex_num[6] = first_remainer + 87;

	if (second_remainer >= 0 && second_remainer <= 9) hex_num[5] = second_remainer + 48;
	if (second_remainer >= 10 && second_remainer <= 15) hex_num[5] = second_remainer + 87;


	first_remainer = color.green % BASE;
	second_remainer = (color.green - first_remainer)/BASE;

	if (first_remainer >= 0 && first_remainer <= 9) hex_num[4] = first_remainer + 48;
	if (first_remainer >= 10 && first_remainer <= 15) hex_num[4] = first_remainer + 87;

	if (second_remainer >= 0 && second_remainer <= 9) hex_num[3] = second_remainer + 48;
	if (second_remainer >= 10 && second_remainer <= 15) hex_num[3] = second_remainer + 87;



	first_remainer = color.red % BASE;
	second_remainer = (color.red - first_remainer)/BASE;

	if (first_remainer >= 0 && first_remainer <= 9) hex_num[2] = first_remainer + 48;
	if (first_remainer >= 10 && first_remainer <= 15) hex_num[2] = first_remainer + 87;

	if (second_remainer >= 0 && second_remainer <= 9) hex_num[1] = second_remainer + 48;
	if (second_remainer >= 10 && second_remainer <= 15) hex_num[1] = second_remainer + 87;


	hex_num[0] = 35;
	
	printf("%s\n",hex_num);
}

//
//
//

int return_letters_in_string(char hexadec) {

	if (hexadec >= '0' && hexadec <= '9') return (hexadec - 48);
	if (hexadec >= 'a' && hexadec <= 'f') return (hexadec - 87);
	return 0;
}
