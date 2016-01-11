#include <stdio.h>

int main()
{
    int length, i, number = 0;
    char str[128];
    gets(str);
    length = strlen(str);
    for(i=0;i<length;i++)
    {
        if(str[i] == ' ') number++; //1

        else if(str[i] == 'a') number++;//2
        else if(str[i] == 'b') number = number + 2;
        else if(str[i] == 'c') number = number + 3;

        else if(str[i] == 'd') number++;//3
        else if(str[i] == 'e') number = number + 2;
        else if(str[i] == 'f') number = number + 3;

        else if(str[i] == 'g') number++;//4
        else if(str[i] == 'h') number = number + 2;
        else if(str[i] == 'i') number = number + 3;

        else if(str[i] == 'j') number++;//5
        else if(str[i] == 'k') number = number + 2;
        else if(str[i] == 'l') number = number + 3;

        else if(str[i] == 'm') number++;//6
        else if(str[i] == 'n') number = number + 2;
        else if(str[i] == 'o') number = number + 3;

        else if(str[i] == 'p') number++;//7
        else if(str[i] == 'q') number = number + 2;
        else if(str[i] == 'r') number = number + 3;
        else if(str[i] == 's') number = number + 4;

        else if(str[i] == 't') number++;//8
        else if(str[i] == 'u') number = number + 2;
        else if(str[i] == 'v') number = number + 3;

        else if(str[i] == 'w') number++;//9
        else if(str[i] == 'x') number = number + 2;
        else if(str[i] == 'y') number = number + 3;
        else if(str[i] == 'z') number = number + 4;
    }
    printf("%d",number);
    return 0;
}