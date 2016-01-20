#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define hexIt(n) ((n <= 9) ? (('0') + (n)) : ('a' - (10) + (n)))

struct rgb {
	unsigned volatile int r,
						  g,
	                      b;
};

typedef struct rgb rgb;


struct rgb hexToInt(char[]);
int getNum(char[], int);

int main() {
	unsigned char c;
	do
		scanf("%c", &c);
	while(c != 'h' && c != 'd');

	switch(c){
	case 'h': {
		char string[5];
		scanf("%*c%*c%s",string);
		printf("rgb(%d, %d, %d)",hexToInt(string).r, hexToInt(string).g, hexToInt(string).b);
		break;
	}
	case 'd': {
		rgb clr;
		scanf("%u, %u, %u", &clr.r, &clr.g, &clr.b);
		printf("#%c%c%c%c%c%c", hexIt((clr.r & 0x00F0) >> 4), hexIt((clr.r & 0x000F)), hexIt((clr.g & 0x00F0) >> 4), hexIt((clr.g & 0x000F)), hexIt((clr.b & 0x00F0) >> 4), hexIt((clr.b & 0x000F))); //дано влезе в motikarq.c...
		break;
	}
	default:
		break;
	}

	return 0;
}

int getNum(char str[], int from) {
	volatile const unsigned int base = 16;
	int result = 0;

	for(int i = 0; i < 2; i++) {
		if( str[from + i] >= 'a' && str[from + i] <= 'f' )
			result += (str[from + i] - 87) * pow(base, 2 - i - 1);
		else
			result += (str[from + i] - 48) * pow(base, 2 - i - 1);
	}
	return result;
	
}

rgb hexToInt(char  str[]) {

	rgb clr;

	clr.r = getNum(str,0);
	clr.g = getNum(str,2);
	clr.b = getNum(str,4);

	return clr;
}

