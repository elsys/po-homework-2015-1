#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    char reverse;

    int i,y;

    gets (word);

        i = 0;
        y = strlen(word)-1;

        while(i<y){

            reverse = word[y];
            word[y] = word[i];
            word[i] = reverse;
        i++;
        y--;
        }
    puts(word);
    return 0;
}