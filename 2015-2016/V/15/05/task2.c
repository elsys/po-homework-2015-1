#include <stdio.h>
#include <stdlib.h>

typedef enum { false = 0, true = 1 } bool;

bool Palindrome(const char*,unsigned int);
int strlen(const char*);
bool isPalindrome(const char* str);
bool isNormalC(const char*);

int main() {
	char string[100];
	scanf("%s", string );

	switch( Palindrome(string,strlen(string)-1) ? 1 : 0 ) {
        case true:
            printf("Your string is palindrome!\n"); break;
        case false:
            printf("Your string isn't palindrome!\n"); break;
        default:
            printf("Unknown exception!\n");
            break;
	}
	//printf("\n%d", isPalindrome(string));
	//printf("\n%d\n", isNormalC(string));

	 return 0;
}

int strlen(const char* s) {
    int i = 0;
    while(*s++)
        i++;
    return i;

}

bool Palindrome(const char* string, unsigned int length) {
    if( length == 0 )
        return true;
    else if (string[strlen(string)-length] != string[length-1])
        return false;
    return Palindrome(string, --length);
}

bool isPalindrome(const char* str) {
    const char* tmp = str + strlen(str);
    while(str<tmp && *str++==*--tmp);
    return (str>=tmp) ? 1 : 0;
}

bool isNormalC(const char* str) {
    int len = strlen(str) - 1, i = 0;

    for(; i <= len>>2; i++) {
        if(str[i] == str[len-i]);
        else
            return 0;
    }
    return 1;
}
