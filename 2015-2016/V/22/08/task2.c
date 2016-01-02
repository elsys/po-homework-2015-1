#include <stdio.h>
#include <stdlib.h>

int main()
{
    char st[1000];
    int i=0,j=0;
    scanf("%[^\n]",st);
    while(st[j]!='\0'){
        switch(st[j]){
            case 'a':i=i+1;break;
            case 'b':i=i+2;break;
            case 'c':i=i+3;break;
            case 'd':i=i+1;break;
            case 'e':i=i+2;break;
            case 'f':i=i+3;break;
            case 'g':i=i+1;break;
            case 'h':i=i+2;break;
            case 'i':i=i+3;break;
            case 'j':i=i+1;break;
            case 'k':i=i+2;break;
            case 'l':i=i+3;break;
            case 'm':i=i+1;break;
            case 'n':i=i+2;break;
            case 'o':i=i+3;break;
            case 'p':i=i+1;break;
            case 'q':i=i+2;break;
            case 'r':i=i+3;break;
            case 's':i=i+4;break;
            case 't':i=i+1;break;
            case 'u':i=i+2;break;
            case 'v':i=i+3;break;
            case 'w':i=i+1;break;
            case 'x':i=i+2;break;
            case 'y':i=i+3;break;
            case 'z':i=i+4;break;
            case ' ':i=i+1;break;
        }
        j++;
    }
    printf("%d",i);
    return 0;
}
