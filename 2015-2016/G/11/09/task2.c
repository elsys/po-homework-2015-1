#include <stdio.h>
#include <string.h>

void letterChecker(const char *input, int **step);
int main() {	
	char buffer[160];
	int var=0;

	while (fgets(buffer, 159, stdin) != NULL) { //for end ctrl+z
			int* step = &var;
			letterChecker(buffer, &step);
		}
		
	printf("%d",var);
	return 0;
}

void letterChecker(const char *input, int **step) {
	int i = 0 , length = strlen(input);
	for (i;i<length;i++) {
		if(input[i]=='a'||input[i]=='d'||input[i]=='g'||input[i]=='j'||input[i]=='m'||input[i]=='p'||input[i]=='t'||input[i]=='w')(**step)++;
		if(input[i]=='b'||input[i]=='e'||input[i]=='h'||input[i]=='k'||input[i]=='n'||input[i]=='q'||input[i]=='u'||input[i]=='x')(**step)+=2;
		if(input[i]=='c'||input[i]=='f'||input[i]=='i'||input[i]=='l'||input[i]=='o'||input[i]=='r'||input[i]=='v'||input[i]=='y')(**step)+=3;
		if(input[i]=='s'||input[i]=='z')(**step)+=4;
		if (input[i] == '\0') break;
	}
}
