#include <stdio.h>
#include <stdlib.h>

int main()

{
    char r2d2[160]={ 0 };
    int i=0,p=0;
    scanf("%s",&r2d2);
    do
    {
        switch(r2d2[p])
        {
            case 'a': case 'd': case 'g': case 'j': case 'm': case 'p': case 't': case 'w': case ' ': i++; break;
            case 'b': case 'e': case 'h': case 'k': case 'n': case 'q': case 'u': case 'x': i+=2; break;
            case 'c': case 'f': case 'i': case 'l': case 'o': case 'r': case 'v': case 'y': i+=3; break;
            case 's': case 'z': i+=4; break;
        }
        p++;
    }while(p<160);
    printf("broy na klikovete = %d",i);
    return 0;
}
