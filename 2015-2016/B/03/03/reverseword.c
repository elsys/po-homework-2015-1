#include <stdio.h>
#include <string.h>
int main() {
    char i,h;
    char s[1000];
    fgets(s, 1000, stdin);
    h=strlen(s);
    for(i=h-1; i>=0; i--) {
        printf("%c", s[i]);
    }
    return 0;
}
