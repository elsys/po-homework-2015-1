#include <stdio.h>
#include <string.h>

int main()
{

    char niz[1000] = { 0 };
    int i = 0;

    while(1)
    {
        scanf("%s",niz);
        if(niz[0] == 'S' && niz[1] == 'T' && niz[2] == 'O' && niz[3] == 'P')
            break;
        while(i < strlen(niz))
        {
            if(niz[i] >= 'a' && niz[i] <= 'z')
                niz[i] -= ('a' - 'A');
            i++;
        }
        i = 0;
        printf("%s ",niz);
    }

    return 0;
}
