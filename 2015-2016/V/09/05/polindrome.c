#include <stdio.h>
#include <string.h>

int polindrome(char a, char b);
int main(void)
{
    char a[100];
    char b[100];

    polindrome(a, b);
}

int polindrome(char a, char b)
{
    printf("Enter word: \n");
    scanf("%s", a);
    strcpy(b, a);
    strrev(b);
    if(strcmp(a,b) == 0){
        printf("1");
    }
    else
        printf("0");
}
