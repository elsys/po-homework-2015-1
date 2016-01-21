#define _GNU_SOURCE 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int is_hex_palindrome(unsigned long long);

int main() {
    
    unsigned long long number;
    
    scanf("%llu", &number);
    
    while (!is_hex_palindrome(number)) {
        number++;
    }
    printf("%llX\n", number);
    
    return 0;
}

int is_hex_palindrome(unsigned long long number) {
    
    char *string;
    char *reversed_string;
    
    asprintf(&string, "%llX", number);
    
    int size = (int)strlen(string);
    
    reversed_string = (char *)malloc(size + 1 * sizeof(char));
    
    for (int i = 0; i < size; ++i) {
        reversed_string[i] = string[size - i - 1];
    }
    reversed_string[size] = '\0';
    int result = (strcmp(string, reversed_string) == 0) ? 1 : 0;
    
    free(string);
    free(reversed_string);
    
    return result;
}
