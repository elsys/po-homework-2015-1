#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a[99],i,c;
    fgets(a, 99, stdin);
    c = strlen(a);
    for(i = c-1;i >= 0;i--) {
        printf("%c", a[i]);
    }
    return 0;
}
