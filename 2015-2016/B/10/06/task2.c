#include <stdio.h>
#include <string.h>

#define LONG 160

int how_many_clicks(char *);

int main () {

	char main_message[LONG];
	scanf("%[^\n]s",main_message);

	printf("%d\n",how_many_clicks(main_message));
	
	return 0;
}

int how_many_clicks(char *message) {

	int times = 0,counter;
	
	int length = 0;
	
	length = strlen(message);

	for (counter = 0;counter < length;counter++) {
		if (message[counter] == 'a' || message[counter] == 'd' || message[counter] == 'g' 
			|| message[counter] == 'j' || message[counter] == 'm' || message[counter] == 'p'
			|| message[counter] == 't' || message[counter] == 'w') {
			times += 1;
		}//1 click

		if (message[counter] == 'b' || message[counter] == 'e' || message[counter] == 'h' 
			|| message[counter] == 'k' || message[counter] == 'n' || message[counter] == 'q'
			|| message[counter] == 'u' || message[counter] == 'x') {
			times += 2;
		}//2 clicks

		if (message[counter] == 'c' || message[counter] == 'f' || message[counter] == 'i' 
			|| message[counter] == 'l' || message[counter] == 'o' || message[counter] == 'r'
			|| message[counter] == 'v' || message[counter] == 'y') {
			times += 3;
		}//3 clicks

		if (message[counter] == 's' || message[counter] == 'z') {
			times += 4;
		}//4 clicks

		//Special validation for spaces

		if (message[counter] == ' ') times += 1; //+1 for spaces
	}


	return times;
}
