#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
char* buttons = "abc|def|ghi|jkl|mno|pqrs|tuv|wxyz| ";

int main() 
{
    char text[100];
    int i, k, z, count = 0;
    scanf ("%[^\n]%*c", text);
    
    for (i = 0; i < strlen(text); i++) 
    {
        char c = text[i];
        for (k = 0; k < strlen(buttons); k++) {
            if (c == buttons[k]) {
                for (z = k; z >= 0; z--) {
                    if(buttons[z] == '|')
                    {
                        break;
                    }
                    
                    count++;
                }
                break;
            }
        }
    }
    
    printf("%d", count);
}
