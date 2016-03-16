#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int i;
    int sum = 0;
    char msg[200];
    int box ;
    scanf("%[^\n]s", msg);
    box = strlen(msg);
    for (i = 0; i < box; i++)
    {
        if(msg[i] == 'a'||msg[i] == 'd'||msg[i] == 'g'||msg[i] == 'j'||msg[i] == 'm'||msg[i] == 'p'||msg[i] == 't'||msg[i] == 'w'||msg[i] == ' '){
            sum = sum + 1;
        }
        if(msg[i] == 'b'||msg[i] == 'e'||msg[i] == 'h'||msg[i] == 'k'||msg[i] == 'n'||msg[i] == 'q'||msg[i] == 'u'||msg[i] == 'x'){
            sum = sum + 2;
        }
        if(msg[i] == 'c'||msg[i] == 'f'||msg[i] == 'i'||msg[i] == 'l'||msg[i] == 'o'||msg[i] == 'r'||msg[i] == 'v'||msg[i] == 'y'){
            sum = sum + 3;
        }
        if (msg[i] == 'z'||msg[i] == 's')
        {
            sum = sum + 4;
        }
    }

    printf("%d", sum);
    return 0;
}