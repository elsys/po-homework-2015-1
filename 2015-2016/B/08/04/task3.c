#include <stdio.h>
#include <string.h>


void create_letter_distribution_program();

int main() {

	create_letter_distribution_program();


	return 0;
}

void create_letter_distribution_program(){
	int numCounting[26][2];
	int index, temp, currentLetter, letterIndex;

	for(index = 0; index < 26; index++) {
		numCounting[index][0] = 'a' + index;
		numCounting[index][1] = 0;
	}

	
	while((currentLetter = getchar()) != EOF) 
		for(letterIndex = 0; letterIndex < 26; letterIndex++)
			if(currentLetter == numCounting[letterIndex][0] || currentLetter == numCounting[letterIndex][0] - 32) 
				numCounting[letterIndex][1] += 1;


	for(index = 0; index < 20; index++)
		for(letterIndex = 0; letterIndex < 25; letterIndex++) {
			if(numCounting[letterIndex][1] < numCounting[letterIndex + 1][1]){
				temp = numCounting[letterIndex][1];
				numCounting[letterIndex][1] = numCounting[letterIndex + 1][1];
				numCounting[letterIndex + 1][1] = temp;

				temp = numCounting[letterIndex][0];
				numCounting[letterIndex][0] = numCounting[letterIndex + 1][0];
				numCounting[letterIndex + 1][0] = temp;
			}
			if(numCounting[letterIndex][1] == numCounting[letterIndex + 1][1]){
				if(numCounting[letterIndex][0] > numCounting[letterIndex + 1][0]){
					temp = numCounting[letterIndex][1];
					numCounting[letterIndex][1] = numCounting[letterIndex + 1][1];
					numCounting[letterIndex + 1][1] = temp;

					temp = numCounting[letterIndex][0];
					numCounting[letterIndex][0] = numCounting[letterIndex + 1][0];
					numCounting[letterIndex + 1][0] = temp;
				}
			}
		}
	
	for(index = 0; index < 26; index++){
		printf("%c : ", numCounting[index][0]);
		printf("%d \n", numCounting[index][1]);
	}

}