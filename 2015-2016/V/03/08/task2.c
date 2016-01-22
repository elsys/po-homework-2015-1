#include <stdio.h>
#include <stdlib.h>

int main()

{
    char text[160] = { 0 };
    scanf("%[^\n]",&text);
    int clicks=0,i=0;
    while (i<160)
    {

        switch(text[i])
        {
            case 'a':case 'd':case 'g':case 'j':case 'm':case 'p':case 't':case 'w':case ' ': clicks++; break;
            case 'b':case 'e':case 'h':case 'k':case 'n':case 'q':case 'u':case 'x': clicks+=2; break;
            case 'c':case 'f':case 'i':case 'l':case 'o':case 'r':case 'v':case 'y': clicks+=3; break;
            case 's':case 'z': clicks+=4; break;

        }
    i++;
        }
    printf("%d", clicks);

}
