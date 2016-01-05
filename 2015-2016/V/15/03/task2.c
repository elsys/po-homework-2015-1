#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void reverse();
void reverse(char*);

int main() {

//	reverse();
	
	char input[1000] = { 0 };
	
	scanf("%s", input);
	
	reverse(input);
	printf("%s", input);	
	
	printf("\n");
	return 0;

}

void reverse(char * string)
{
	if((string == NULL) || (*string==0) || !(string))
		return;
	int i = 0;
	
	for(; i < (strlen(string))/2 ; i++) {
		string[i] ^= string[strlen(string) - i - 1];
		string[strlen(string) - i - 1] ^= string[i];
		string[i] ^= string[strlen(string) - i - 1];
	}
}

/*

void reverse() {

	char ch;
	scanf("%c", &ch);
	if(ch == 10)
		return;
	reverse();
	printf("%c", ch);
}

*/
