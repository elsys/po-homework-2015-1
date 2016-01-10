#include <stdio.h>
#include <string.h>

int main() {
	char Nokia[161], lenght;
	int count, click = 0;

	scanf ("%[^\n]s",Nokia);

	lenght = strlen (Nokia);

	for (count = 0; count < lenght; count++) {

	if (Nokia[count] == 'a' || Nokia[count] == 'd' || Nokia[count] == 'g' || Nokia[count] == 'j' || Nokia[count] == 'm' || Nokia[count] == 'p' || Nokia[count] == 't' || Nokia[count] == 'w') click += 1;

	if (Nokia[count] == 'b' || Nokia[count] == 'e' || Nokia[count] == 'k' || Nokia[count] == 'h' || Nokia[count] == 'n' || Nokia[count] == 'q' || Nokia[count] == 'u' || Nokia[count] == 'x') click += 2;

	if (Nokia[count] == 'c' || Nokia[count] == 'f' || Nokia[count] == 'i' || Nokia[count] == 'l' || Nokia[count] == 'o' || Nokia[count] == 'r' || Nokia[count] == 'v' || Nokia[count] == 'y') click += 3;

	if (Nokia[count] == 's' || Nokia[count] == 'z') click += 4;

	if (Nokia[count] == ' ') click += 1;

	}

	printf ("%d", click);

	return 0;
}
