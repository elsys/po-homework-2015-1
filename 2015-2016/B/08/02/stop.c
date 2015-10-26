#include <stdio.h>
#include <stdlib.h>

int main() {

	int c , i, j, a[1000];

	c = getchar();
	for(i = 0, j = 1; i < 1000; i++, j++){
		a[i] = c;
		if(a[i-5] < 33
			&& a[i] < 33
			&& (a[i-1] == 112 || a[i-1] == 80)
			&& (a[i-2] == 111 || a[i-2] == 79)
			&& (a[i-3] == 116 || a[i-3] == 84)
			&& (a[i-4] == 115 || a[i-4] == 83) ) break;
		c = getchar();
	}

	for(i = 0; i < j - 5; i++)
	if(a[i] > 96 && a[i] < 123) a[i] -= 32;

	printf("\n");

	for(i = 0; i < j - 5; i++)
		printf("%c", a[i]);

	return (0);

}
