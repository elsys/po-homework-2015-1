#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void reverse();
void reverse(char*);

int main() {

//	reverse();
	
	char* input = NULL;
	scanf("%m[^\n]s", &input);

	reverse(input);

	free(input);			
	
	printf("\n");
	return 0;

}

void reverse(char * string)
{
	if((string == NULL) || (*string==0) || !(string))
		return;
	unsigned int size = strlen(string) - 1, mid = size/2, beg = 0;

	while((mid--) != 0) {

		string[beg] ^= string[size];
		string[size] ^= string[beg];
		string[beg++] ^= string[size--];		
	
	}
		
	printf("%s", string);
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
