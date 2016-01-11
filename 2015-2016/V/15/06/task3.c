#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char letter;
    unsigned int count;
} alpha;//bet

alpha add_letter(char letter, unsigned int count) {
    alpha* r = malloc(sizeof(alpha*));
    r->letter = letter;
    r->count = count;
    return *r;
}

char* to_lower(char[]);
void create_letter_distribution_diagram(const char*);

int main() {

    unsigned int i = 0;
    char* sntc; //sentence
    sntc = malloc(sizeof(char));
    while((sntc[i++] = getchar()) != '\n')
        sntc = (char*)realloc(sntc,sizeof(char)*(i+1));
    sntc[i-1] = '\0';

    create_letter_distribution_diagram(to_lower(sntc));

    return 0;
}


void create_letter_distribution_diagram(const char* string) {
    unsigned int i = 0, j;
    alpha model[26] = {{ 0 }};
    for(j = 0; j <= ('z' - 'a'); j++)
        model[j] = add_letter(j+'a',0);
    while(*string++)
        for(j = 0; j <= ('z' - 'a'); j++)
            if(*(string-1) == model[j].letter)
                model[j].count++;

    for(i = 0; i <= ('z' - 'a'); i++ )
        for(j = 0; j <= ('z' - 'a') - i; j++ )
            if(model[j].count < model[j+1].count) {
                alpha tmp = model[j];
                model[j] = model[j+1];
                model[j+1] = tmp;
            }

    for(j = 0; j <= 'z'-'a'; j++)
        printf("%c: %d\n",model[j].letter,model[j].count);

}

char* to_lower(char string[]) {
    int i = 0;
    do
        if(string[i] >= 'A' && string[i] <= 'Z')
            string[i]|=0x60;
    while(string[i++] != '\0');
    return string;
}
