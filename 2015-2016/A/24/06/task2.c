
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 6000
int main()
{
	char input_s;
	int i = 0;

	do{
		input_s = getchar();

		if (input_s == 'a' || input_s == 'd' || input_s == 'g' || input_s == 'j' || input_s == 'm' || input_s == 'p' || input_s == 't' || input_s == 'w' || input_s == ' '  )
			i++;
		if (input_s == 'b' || input_s == 'e' || input_s == 'h' || input_s == 'k' || input_s == 'n' || input_s == 'q' || input_s == 'u' || input_s == 'x' )
			i+=2;
		if (input_s == 'c' || input_s == 'f' || input_s == 'i' || input_s == 'l' || input_s == 'o' || input_s == 'r' || input_s == 'v' || input_s == 'y')
			i += 3;
		if (input_s == 's' || input_s == 'z' )
			i += 4;

	} while (input_s != '\n');

	printf("%d", i);

	return 0;
}
