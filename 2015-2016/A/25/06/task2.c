#include <stdio.h>
#include <string.h>
#define MAX 160

int clicks(char);

int main(){
    int sum = 0, length,i = 0;
    char string[MAX],temp;

    while((temp != '\n') && i < MAX){
        temp = getchar();
        string[i] = temp;
        i++;
    }

    length = i;

    for(i = 0; i < length; i++){
        sum += clicks(string[i]);

    }

    printf("%d", sum);

    return 0;
}

int clicks(char letter){

    switch(letter){
        case 'a': return 1;
        case 'b': return 2;
        case 'c': return 3;
        case 'd': return 1;
        case 'e': return 2;
        case 'f': return 3;
        case 'g': return 1;
        case 'h': return 2;
        case 'i': return 3;
        case 'j': return 1;
        case 'k': return 2;
        case 'l': return 3;
        case 'm': return 1;
        case 'n': return 2;
        case 'o': return 3;
        case 'p': return 1;
        case 'q': return 2;
        case 'r': return 3;
        case 's': return 4;
        case 't': return 1;
        case 'u': return 2;
        case 'v': return 3;
        case 'w': return 1;
        case 'x': return 2;
        case 'y': return 3;
        case 'z': return 4;
        case ' ': return 1;
        default: return 0;
    }

    return 0;
}
