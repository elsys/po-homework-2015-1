#include <stdio.h>

int tohex(char c) {
	if(c >= '0' && c <= '9')
		return c - '0';
	else
		return c - 'a' + 10;
}

int main() {

	char c;
	scanf("%c%*c", &c);
	switch(c) {
		case 'd' : {
			int r, g, b;
			scanf("%d, %d, %d", &r, &g, &b);
			printf("#%x%x%x", r, g, b );
			break;
		}
		case 'h' : {
			char num[6];
			scanf("%*c%s", num);
			printf("rgb(%d, %d,%d)\n", tohex(num[0]) * 16 + tohex(num[1]), tohex(num[2]) * 16 + tohex(num[3]), tohex(num[4]) * 16 + tohex(num[5]));
			break;
		}
	}
	return 0;
}
