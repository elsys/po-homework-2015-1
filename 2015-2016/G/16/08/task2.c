#include <stdio.h>


int main()
{

    char sentence[160];
    int i;
    int answer = 0;
    int length;

    scanf("%[^\n]s",sentence);

    length = strlen(sentence);



    for(i = 0;i < length;i++){

        switch(sentence[i]){

        case 'a' :
        case 'd' :
        case ' ' :
        case 'g' :
        case 'j' :
        case 'm' :
        case 'p' :
        case 't' :
        case 'w' : answer += 1;break;

        case 'b' :
        case 'e' :
        case 'h' :
        case 'k' :
        case 'n' :
        case 'q' :
        case 'u' :
        case 'x' : answer += 2;break;

        case 'c' :
        case 'f' :
        case 'i' :
        case 'l' :
        case 'o' :
        case 'r' :
        case 'v' :
        case 'y' : answer += 3;break;

        case 's' :
        case 'z' : answer += 4;break;
        }

    }
    printf("%d",answer);

    return 0;

}


