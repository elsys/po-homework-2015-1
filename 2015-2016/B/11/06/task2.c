#include <stdio.h>
#include <string.h>

int main() {
	char Nokia[200], l;
	int counter=0,count ;

	scanf ("%[^\n]s",Nokia);

	l = strlen (Nokia);

	for (count = 0; count < l; count++) {


	if (Nokia[count] == 'a') counter++;
	if (Nokia[count] == 'd') counter++;
	if (Nokia[count] == 'g') counter++;
	if (Nokia[count] == 'j') counter++;
	if (Nokia[count] == 'm') counter++;
	if (Nokia[count] == 'p') counter++;
	if (Nokia[count] == 't') counter++;
	if (Nokia[count] == 'w') counter++;
	if (Nokia[count] == ' ') counter++;

	if (Nokia[count] == 'A') counter++;
	if (Nokia[count] == 'D') counter++;
	if (Nokia[count] == 'G') counter++;
	if (Nokia[count] == 'J') counter++;
	if (Nokia[count] == 'M') counter++;
	if (Nokia[count] == 'P') counter++;
	if (Nokia[count] == 'T') counter++;
	if (Nokia[count] == 'W') counter++;


	if (Nokia[count] == 'b') counter=counter+2;
	if (Nokia[count] == 'e') counter=counter+2;
	if (Nokia[count] == 'k') counter=counter+2;
	if (Nokia[count] == 'h') counter=counter+2;
	if (Nokia[count] == 'n') counter=counter+2;
	if (Nokia[count] == 'q') counter=counter+2;
	if (Nokia[count] == 'u') counter=counter+2;
	if (Nokia[count] == 'x') counter=counter+2;

	if (Nokia[count] == 'B') counter=counter+2;
	if (Nokia[count] == 'E') counter=counter+2;
	if (Nokia[count] == 'K') counter=counter+2;
	if (Nokia[count] == 'H') counter=counter+2;
	if (Nokia[count] == 'N') counter=counter+2;
	if (Nokia[count] == 'Q') counter=counter+2;
	if (Nokia[count] == 'U') counter=counter+2;
	if (Nokia[count] == 'X') counter=counter+2;


	if (Nokia[count] == 'c') counter=counter+3;
	if (Nokia[count] == 'f') counter=counter+3;
	if (Nokia[count] == 'i') counter=counter+3;
	if (Nokia[count] == 'l') counter=counter+3;
	if (Nokia[count] == 'o') counter=counter+3;
	if (Nokia[count] == 'r') counter=counter+3;
	if (Nokia[count] == 'v') counter=counter+3;
	if (Nokia[count] == 'y') counter=counter+3;

	if (Nokia[count] == 'C') counter=counter+3;
	if (Nokia[count] == 'F') counter=counter+3;
	if (Nokia[count] == 'I') counter=counter+3;
	if (Nokia[count] == 'L') counter=counter+3;
	if (Nokia[count] == 'O') counter=counter+3;
	if (Nokia[count] == 'R') counter=counter+3;
	if (Nokia[count] == 'V') counter=counter+3;
	if (Nokia[count] == 'Y') counter=counter+3;


	if (Nokia[count] == 's') counter=counter+4;
	if (Nokia[count] == 'z') counter=counter+4;

	if (Nokia[count] == 'S') counter=counter+4;
	if (Nokia[count] == 'Z') counter=counter+4;


	}

	printf ("\n%d",counter);

	return 0;
}
