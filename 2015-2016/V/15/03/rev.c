#include <stdio.h>

void reverse();

int main() {

	reverse();
	printf("\n");
	return 0;

}

void reverse() {

	char ch;
	scanf("%c", &ch);
	if(ch == 10)
		return;
	reverse();
	printf("%c", ch);
}
