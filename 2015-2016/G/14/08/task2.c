#include<stdio.h>
#include<string.h>

void checkLetter(char letter, int* counter){
    if(letter == 'a' || letter == 'd'|| letter == 'g'|| letter == 'j'|| letter == 'm'|| letter == 'p'|| letter == 't'|| letter == 'w'|| letter == ' ') *counter=*counter + 1;
    if(letter == 'b' || letter == 'e'|| letter == 'h'|| letter == 'k'|| letter == 'n'|| letter == 'q'|| letter == 'u'|| letter == 'x') *counter=*counter + 2;
    if(letter == 'c' || letter == 'f'|| letter == 'i'|| letter == 'l'|| letter == 'o'|| letter == 'r'|| letter == 'v'|| letter == 'y') *counter=*counter + 3;
    if(letter == 's' || letter == 'z') *counter=*counter + 4;

}

int main(){
    char ch;
    int counter = 0;

    while(ch = getchar()){
            if(ch != '\n'){
                checkLetter(ch, &counter);
            }else{
                break;
            }
    }

    printf("%d", counter);

    return 0;
}
