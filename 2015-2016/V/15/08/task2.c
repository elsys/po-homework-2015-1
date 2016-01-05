#include <stdio.h>
#include <stdlib.h>

typedef struct  {
	char sym;
	int click_worthy;
} nokiamodel;

void init(nokiamodel* model, const unsigned short basei, const unsigned short basej) {
	for(unsigned short i = 0, cnt = 0, x = 0; i < basei; i++) {
		for(int j = 1; j <= basej + x; j++, cnt++) {
			model[cnt].sym = cnt + 'a';
			model[cnt].click_worthy = j;

			if(i ==	5 || i == 7)
				x = 1;
			else
				x = 0;
		}
	}
	model[basei*basej-1].sym = ' ';

}

int main() {

	nokiamodel letters[27];
	register int i = 0, sum = 0;

	init((nokiamodel*)letters, 9, 3);

	char* str = malloc(sizeof(char));

	while((str[i++] = getchar()) != '\n')
		str = (char*)realloc(str, sizeof(char) * (i+1));

	for(int j = 0; j <= i; j++) {
		for(int q = 0; q <= 26; q++) {
			if(letters[q].sym == str[j])
				sum += letters[q].click_worthy;
		}
	}
	printf("%d", sum);
	
	return 0;
}