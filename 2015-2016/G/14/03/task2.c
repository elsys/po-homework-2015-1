#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    char w[150];
    int i = 0;

    printf("vuvedi text:\n");

    while((c = getchar())!='\n')
    {
       // printf("%c",c);
        w[i] = c;
        i++;
    }
    
    printf("\noburnat text\n");
    
    while(i > 0)
    {
        i--;
        printf("%c",w[i]);
    }
    
    printf("\n");
    
    return 0;
}
