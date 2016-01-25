#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, sum = 0;
    char n[160];
    fgets(n,160,stdin);
    for(i = 0;n[i] != '\n' && i < 160; i++)
    {
        switch(n[i])
        {
            case 'a' :
                sum++; break;
            case 'b' :
                sum = sum + 2; break;
            case 'c' :
                sum = sum + 3; break;
            case 'd' :
                sum++; break;
            case 'e' :
                sum = sum + 2; break;
            case 'f' :
                sum = sum + 3; break;
            case 'g' :
                sum++; break;
            case 'h' :
                sum = sum + 2; break;
            case 'i' :
                sum = sum + 3; break;
            case 'j' :
                sum++; break;
            case 'k' :
                sum = sum + 2; break;
            case 'l' :
                sum = sum + 3; break;
            case 'm' :
                sum++; break;
            case 'n' :
                sum = sum + 2; break;
            case 'o' :
                sum = sum + 3; break;
            case 'p' :
                sum++; break;
            case 'q' :
                sum = sum + 2; break;
            case 'r' :
                sum = sum + 3; break;
            case 's' :
                sum = sum + 4; break;
            case 't' :
                sum++; break;
            case 'u' :
                sum = sum + 2; break;
            case 'v' :
                sum = sum + 3; break;
            case 'w' :
                sum++; break;
            case 'x' :
                sum = sum + 2; break;
            case 'y' :
                sum = sum + 3; break;
            case 'z' :
                sum = sum + 4; break;
            case ' ' :
                sum++; break;
        }
    }
    printf("%d", sum);
    return 0;
}
