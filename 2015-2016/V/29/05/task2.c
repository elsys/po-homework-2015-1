#include <stdio.h>
#include <string.h>

typedef enum { false, true } bool;

bool isPalindrome(const char* string) {
    int i = 0,beg = 0, end = strlen(string)-1;
    for(; i < (strlen(string)-1)/2; i++,beg++,end--) {
        if(string[beg] != string[end])
            return false;
    }
    return true;
}

int main() {

    char str[1000];
    scanf("%s",str);
    printf("%d",isPalindrome(str));
}
