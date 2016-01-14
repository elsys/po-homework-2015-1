#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int value();
 
int main()
{
    int print;
 
    print = value();
 
    printf("%d", print);
}
 
int value()
{
    char sentence;
    int i, clicks = 0;
 
    sentence = getchar();
    for(i=0; i < 160 && (sentence != EOF); i++)
        {
        switch(sentence)
        {
            case 'a':case 'd':case 'g':
            case 'j':case 'm':case 'p':
            case 't':case 'w':case ' ':
                clicks += 1;
                break;
            case 'b':case 'e':case 'h':
            case 'k':case 'n':case 'q':
            case 'u':case 'x':
                clicks += 2;
                break;
            case 'c':case 'f':case 'i':
            case 'l':case 'o':case 'r':
            case 'v':case 'y':
                clicks += 3;
                break;
            case 's':case 'z':
                clicks += 4;
        }
        sentence = getchar();
    }
 
    return clicks;
}