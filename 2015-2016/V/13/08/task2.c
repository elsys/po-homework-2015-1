#include <stdio.h>
#include <string.h>

int main()
{
    int l, n=0;
    char sms[161];
    fgets(sms , 160 , stdin);
    l = strlen(sms);
    for(int i=0;i<l;i++)
    {
        switch(sms[i])
        {
            case 'a': n+=1; break;
            case 'b': n+=2; break;
            case 'c': n+=3; break;
            case 'd': n+=1; break;
            case 'e': n+=2; break;
            case 'f': n+=3; break;
            case 'g': n+=1; break;
            case 'h': n+=2; break;
            case 'i': n+=3; break;
            case 'j': n+=1; break;
            case 'k': n+=2; break;
            case 'l': n+=3; break;
            case 'm': n+=1; break;
            case 'n': n+=2; break;
            case 'o': n+=3; break;
            case 'p': n+=1; break;
            case 'q': n+=2; break;
            case 'r': n+=3; break;
            case 's': n+=4; break;
            case 't': n+=1; break;
            case 'u': n+=2; break;
            case 'v': n+=3; break;
            case 'w': n+=1; break;
            case 'x': n+=2; break;
            case 'y': n+=3; break;
            case 'z': n+=4; break;
            case ' ': n+=1; break;
        }
    }

    printf("%d",n);
    return 0;
}
