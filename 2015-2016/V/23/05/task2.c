#include <stdio.h>
#include <string.h>

int check(char* string) {
    int i = 0,beg = 0, end = strlen(string)-1;
    for(; i < (strlen(string)-1)/2; i++,beg++,end--) {
        if(string[beg] != string[end])
            return 0;
    }
    return 1;
}

int main() {

    char str[1000];
    scanf("%s",str);
    printf("%d",check(str));
}
