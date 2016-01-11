#include <stdio.h>
#include <string.h>

int main() {
	int i;
	char arr[160];

	scanf("%[^\n]s", arr);

	int l = strlen(arr);

	int click_counter;
	for(i = 0; i < l; i++) {
		if(arr[i] == 'a' || arr[i] == 'd' || arr[i] == 'g' || arr[i] == 'j' || arr[i] == 'm' || arr[i] == 'p' || arr[i] == 't' || arr[i] == 'w' ||arr[i] == ' ') click_counter += 1;
		if(arr[i] == 'b' || arr[i] == 'e' || arr[i] == 'h' || arr[i] == 'k' || arr[i] == 'n' || arr[i] == 'q' || arr[i] == 'u' || arr[i] == 'x') click_counter += 2;
		if(arr[i] == 'c' || arr[i] == 'f' || arr[i] == 'i' || arr[i] == 'l' || arr[i] == 'o' || arr[i] == 'r' || arr[i] == 'v' || arr[i] == 'y') click_counter += 3;

		if(arr[i] == 'z' || arr[i] == 's') click_counter += 4;
	}
	printf("%d", click_counter);
	printf("\n\n\n");

	return 0;
}