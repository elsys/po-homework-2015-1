#include <stdio.h>

void print(char* d) {
	int i;
	for(i = 0; i < 15;++i)
		printf("%c ", d[i]);
	printf("\n");
}

int position(char c) {
	if(c >= '0' && c <= '9')
		return c - '0';
	switch(c) {
		case 'A': return 14;
		case 'K': return 13;
		case 'Q': return 12;
		case 'J': return 11;
		case 'T': return 10;
	}
	return 0;
}

int main() {

	char deck[15];
	char tmp;
	char c;
	int i = 0;
	int k = 0;
	while((c = getchar()) != "\n")
			deck[i++] = c;
	print(deck);
	for(i = 0; i < 15;++i) {
		for(k = 0;k < 14;++k) {
			if(position(deck[k]) > position(deck[k + 1])) {
				tmp = deck[k + 1];
				deck[k + 1] = deck[k];
				deck[k] = tmp;
			}
		}
	}
	print(deck);
	return 0;
}
