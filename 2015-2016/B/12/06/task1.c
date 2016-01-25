#include <stdio.h>
#include <string.h>

int dec();
int hex();

int main() {
	char InputSymbol[2];

	scanf ("%[^\n]s",InputSymbol);

	if (InputSymbol[0] == 'd') dec();
	if (InputSymbol[0] == 'h') hex();

	return 0;
}

int dec() {
	int a, b, c;
	int dev, diff;
	int count;
	char String[7];

	scanf ("%d, %d, %d,", &a, &b, &c);

	dev = a / 16;
	diff = a - dev * 16;

	if (dev >= 0 && dev <= 9) String[0] = dev + '0';
	if (dev == 10) String[0] = 'a';
	if (dev == 11) String[0] = 'b';
	if (dev == 12) String[0] = 'c';
	if (dev == 13) String[0] = 'd';
	if (dev == 14) String[0] = 'e';
	if (dev == 15) String[0] = 'f';

	if (diff >= 0 && diff <= 9) String[1] = diff + '0';
	if (diff == 10) String[1] = 'a';
	if (diff == 11) String[1] = 'b';
	if (diff == 12) String[1] = 'c';
	if (diff == 13) String[1] = 'd';
	if (diff == 14) String[1] = 'e';
	if (diff == 15) String[1] = 'f';

	dev = b / 16;
	diff = b - dev * 16;

	if (dev >= 0 && dev <= 9) String[2] = dev + '0';
	if (dev == 10) String[2] = 'a';
	if (dev == 11) String[2] = 'b';
	if (dev == 12) String[2] = 'c';
	if (dev == 13) String[2] = 'd';
	if (dev == 14) String[2] = 'e';
	if (dev == 15) String[2] = 'f';

	if (diff >= 0 && diff <= 9) String[3] = diff + '0';
	if (diff == 10) String[3] = 'a';
	if (diff == 11) String[3] = 'b';
	if (diff == 12) String[3] = 'c';
	if (diff == 13) String[3] = 'd';
	if (diff == 14) String[3] = 'e';
	if (diff == 15) String[3] = 'f';

	dev = c / 16;
	diff = c - dev * 16;

	if (dev >= 0 && dev <= 9) String[4] = dev + '0';
	if (dev == 10) String[4] = 'a';
	if (dev == 11) String[4] = 'b';
	if (dev == 12) String[4] = 'c';
	if (dev == 13) String[4] = 'd';
	if (dev == 14) String[4] = 'e';
	if (dev == 15) String[4] = 'f';

	if (diff >= 0 && diff <= 9) String[5] = diff + '0';
	if (diff == 10) String[5] = 'a';
	if (diff == 11) String[5] = 'b';
	if (diff == 12) String[5] = 'c';
	if (diff == 13) String[5] = 'd';
	if (diff == 14) String[5] = 'e';
	if (diff == 15) String[5] = 'f';

	printf ("#");
	for (count = 0; count < 6; ++count) printf ("%c",String[count]);

	return 0;
}

int hex() {
	char String[8];
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

	getchar();
	scanf ("%[^\n]s",String);

	if (String[1] >= 'a' && String[1] <= 'f') {
	if (String[1] == 'a') a = 10;
	if (String[1] == 'b') a = 11;
	if (String[1] == 'c') a = 12;
	if (String[1] == 'd') a = 13;
	if (String[1] == 'e') a = 14;
	if (String[1] == 'f') a = 15;
	} else {
	a = String[1] - '0';
	}

	if (String[2] >= 'a' && String[1] <= 'f') {
	if (String[2] == 'a') b = 10;
	if (String[2] == 'b') b = 11;
	if (String[2] == 'c') b = 12;
	if (String[2] == 'd') b = 13;
	if (String[2] == 'e') b = 14;
	if (String[2] == 'f') b = 15;
	} else {
	b = String[2] - '0';
	}

	if (String[3] >= 'a' && String[3] <= 'f') {
	if (String[3] == 'a') c = 10;
	if (String[3] == 'b') c = 11;
	if (String[3] == 'c') c = 12;
	if (String[3] == 'd') c = 13;
	if (String[3] == 'e') c = 14;
	if (String[3] == 'f') c = 15;
	} else {
	c = String[3] - '0';
	}

	if (String[4] >= 'a' && String[4] <= 'f') {
	if (String[4] == 'a') d = 10;
	if (String[4] == 'b') d = 11;
	if (String[4] == 'c') d = 12;
	if (String[4] == 'd') d = 13;
	if (String[4] == 'e') d = 14;
	if (String[4] == 'f') d = 15;
	} else {
	d = String[4] - '0';
	}

	if (String[5] >= 'a' && String[5] <= 'f') {
	if (String[5] == 'a') e = 10;
	if (String[5] == 'b') e = 11;
	if (String[5] == 'c') e = 12;
	if (String[5] == 'd') e = 13;
	if (String[5] == 'e') e = 14;
	if (String[5] == 'f') e = 15;
	} else {
	e = String[5] - '0';
	}

	if (String[6] >= 'a' && String[6] <= 'f') {
	if (String[6] == 'a') f = 10;
	if (String[6] == 'b') f = 11;
	if (String[6] == 'c') f = 12;
	if (String[6] == 'd') f = 13;
	if (String[6] == 'e') f = 14;
	if (String[6] == 'f') f = 15;
	} else {
	f = String[6] - '0';
	}

	a = a * 16 + b;
	c = c * 16 + d;
	e = e * 16 + f;

	printf ("rgb(%d, %d, %d)", a, c, e);

	return 0;
}
