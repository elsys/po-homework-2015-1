#include <stdio.h>
#include <string.h>

int is_hex_palindrome(char*);
void to_upper(char*);

int main() {
    
    char hex[8];
    
    int number;
    scanf("%d", &number);
    
    sprintf(hex, "%x", number);
    
    if (is_hex_palindrome(hex)) {
        to_upper(hex);
        printf("%s", hex);
    } else {
        
        do {
            number++;
            sprintf(hex, "%x", number);
        } while (!is_hex_palindrome(hex));
        
        to_upper(hex);
        printf("%s", hex);
    }
    
    return 0;
}

int is_hex_palindrome(char *hex) {
    
    int length = strlen(hex);
    
    for (int i = 0; i < length / 2; i++) {
        if (hex[i] != hex[length - i - 1]) {
            return 0;
        }
    }
    
    return 1;   
}

void to_upper(char *string) {
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] -= 'a' - 'A';
        }
    }
}