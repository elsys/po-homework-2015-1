#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[160];
    int j,n,i=0;
    fgets(s,160,stdin);
    n=strlen(s);
    for(j=0;j<n;j++)
        switch(s[j])
        {
            case 'a' : i++; break;
            case 'b' : i=i+2; break;
            case 'c' : i=i+3; break;

            case 'd' : i++; break;
            case 'e' : i=i+2; break;
            case 'f' : i=i+3; break;

            case 'g' : i++; break;
            case 'h' : i=i+2; break;
            case 'i' : i=i+3; break;

            case 'j' : i++; break;
            case 'k' : i=i+2; break;
            case 'l' : i=i+3; break;

            case 'm' : i++; break;
            case 'n' : i=i+2; break;
            case 'o' : i=i+3; break;

            case 'p' : i++; break;
            case 'q' : i=i+2; break;
            case 'r' : i=i+3; break;
            case 's' : i=i+4; break;

            case 't' : i++; break;
            case 'u' : i=i+2; break;
            case 'v' : i=i+3; break;

            case 'w' : i++; break;
            case 'x' : i=i+2; break;
            case 'y' : i=i+3; break;
            case 'z' : i=i+4; break;

            case ' ' : i++; break;
        }
        printf("%d",i);
    return 0;
}
