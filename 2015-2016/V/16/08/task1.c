#include <stdio.h>	
#include <string.h>

void hex_to_dec();

int main() {

	int r, g, b;	
	char k;
	scanf("%s", &k);	
	if (k == 'd') {
		scanf("%d, %d, %d", &r, &g, &b);
		printf("#%x%x%x", r, g, b);
		return 0;
	}	
	if (k == 'h') {
		hex_to_dec();
		return 0;
	}	
	return 0;
}

void hex_to_dec() { 

	char c[6];
	scanf("%s", c);
	int r, g, b, i = 0;

	for (i = 0; i <= 6; i++){
		switch (c[i]){
			case '0': c[i] = 0; break;
			case '1': c[i] = 1; break;
			case '2': c[i] = 2; break;
			case '3': c[i] = 3; break;
			case '4': c[i] = 4; break;
			case '5': c[i] = 5; break;
			case '6': c[i] = 6; break;
			case '7': c[i] = 7; break;
			case '8': c[i] = 8; break;
			case '9': c[i] = 9; break;
			case 'a': c[i] = 10; break;
			case 'b': c[i] = 11; break;
			case 'c': c[i] = 12; break;
			case 'd': c[i] = 13; break;
			case 'e': c[i] = 14; break;
			case 'f': c[i] = 15; break;
		}
	}		
	r = (c[1] * 16) + c[2];
	g = (c[3] * 16) + c[4];
	b = (c[5] * 16) + c[6];

	printf("rgb(%d, %d, %d)", r, g, b);
}

