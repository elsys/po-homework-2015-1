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
	printf("%s", input);
	free(input);			
	
	printf("\n");
	return 0;

}

void reverse(char * string)
{
	if((string == NULL) || (*string==0) || !(string))
		return;
	unsigned int size = strlen(string) - 1, mid = size/2, beg = 0;

	if(mid%2 == 1 || size == 1) mid++;
	
	while((mid--) != 0) {

		string[beg] ^= string[size];
		string[size] ^= string[beg];
		string[beg++] ^= string[size--];		
	
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
