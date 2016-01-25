#include <stdio.h>

struct Letters {
    char code;
    int clicks;
};

int main() {

    char symbol;
    int i = 0, clicks = 1, button = 2, code;
    struct Letters letters[26];
    
    for (code = 'a'; code <= 'z'; code++, i++, clicks++) {
        
        letters[i].code = code;
        letters[i].clicks = clicks;
        
        if (clicks == 3) {
            if (button == 7 || button == 9) {
                letters[i + 1].code = code + 1;
                letters[i + 1].clicks = 4;
                i++;
                code++;
            }
            button++;
            clicks = 0;
        }
    }
    
    clicks = 0;
    
    do {
        symbol = (char)getchar();
        if (symbol == ' ') {
            clicks++;
            continue;
        } else {
            clicks += letters[symbol - 'a'].clicks;
        }
    } while (symbol != '\n' && symbol != EOF);
    
    printf("%d", clicks);
    
    return 0;
}