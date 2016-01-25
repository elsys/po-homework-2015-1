#include <stdio.h>
#include <ctype.h>

typedef struct {
    char bukva;
    int broi;
} letter_model;

void create_letter_distribution_diagram();

int main() {
    create_letter_distribution_diagram();
    return 0;
}

void create_letter_distribution_diagram() {
    int i = 0;
    letter_model azbk[26];
    for(; i <= 25; i++) {
        azbk[i].bukva = i + 'a';
        azbk[i].broi = 0;
    }
    do {
        i = getchar();
        if((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z')) {
            i = tolower(i);
            if(azbk[i-'a'].bukva == i)
                azbk[i-'a'].broi++;
        }
    } while(i != EOF);
    for(i = 0; i < 26; i++) {
        for(int j = 0; j < 26 - i; j++) {
            if(azbk[j].broi < azbk[j+1].broi) {
                letter_model tmp = azbk[j];
                azbk[j] = azbk[j+1];
                azbk[j+1] = tmp;
            }
        }
    }
    for(i = 0; i < 26; i++)
        printf("%c: %d\n",azbk[i].bukva, azbk[i].broi);

}
