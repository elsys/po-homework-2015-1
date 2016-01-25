#include <stdio.h>
#include <string.h>

int main(){
	char input;
	int i, sum = 0;

    input = getchar();
	for(i = 0; i < 160 && (input != '\n'); i++){
		switch(input){
			case ' ':case 'a':case 'd':
			case 'g':case 'j':case 'm':
			case 'p':case 't':case 'w':
				sum += 1;
				break;
			case 'b':case 'e':
			case 'h':case 'k':case 'n':
			case 'q':case 'u':case 'x':
				sum += 2;
				break;
			case 'c':case 'f':
			case 'i':case 'l':case 'o':
			case 'r':case 'v':case 'y':
				sum += 3;
				break;
			case 's':case 'z':
				sum += 4;
		}
		input = getchar();
	}

	printf("%d", sum);

	return 0;
}