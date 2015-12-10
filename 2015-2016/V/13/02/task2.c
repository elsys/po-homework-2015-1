#include <stdio.h>
#include <string.h>

int main()
{
    char in[1024], s[] = "STOP";
    while(strcmp(in,s) != 0)
    {
        gets(in);
        int n = strlen(in), i;
            for(i = 0 ; i < n ; i++)
            {
                if(in[i]<='A' || in[i]>='Z') in[i] -= 'a' - 'A';
            }
        puts(in);
    }
    return 0;
}
