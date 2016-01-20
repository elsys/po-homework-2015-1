#include <stdio.h>

typedef struct {
    char letter;
    int cnt;
} alpha;

char tolowerl(char a) {
    if(a >= 'A' && a <= 'Z') {
        return (a+='a'-'A');
    }
    return a;
}

void create_letter_distribution_diagram() {

    ///initialization
    int i = 0;
    alpha a[26];
    for(; i <= 25; i++) {
        a[i].letter = i + 'a';
        a[i].cnt = 0;
    }

    ///counting
    do {
        i = getchar();
        if((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z')) {
            i = tolowerl(i);
            if(a[i-'a'].letter == i) ///this if is useless...
                a[i-'a'].cnt++;
        }
    } while(i != EOF);

    ///sorting
    int j;
    for(i = 0; i <= 25; i++) {
        for(j = 0; j <= 25 - i; j++) {
            if(a[j].cnt < a[j+1].cnt) {
                alpha tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    ///printing
    for(i = 0; i <= 25; i++)
        printf("%c:%d\n",a[i].letter,a[i].cnt);

}

int main() {
    create_letter_distribution_diagram();
    return 0;
}
