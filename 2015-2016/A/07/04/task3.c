#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void create_letter_distribution_diagram();

int main()
{
    create_letter_distribution_diagram();
    return 0;
}

void create_letter_distribution_diagram()
{

    char c, alphabet[26], swapch;
    int j = 0, i, swap;
    int counter[26];

    for(i = 0, j = 'a'; i < 26; i++, j++)
            alphabet[i] = j;
    for(i = 0; i < 26; i++)
            counter[i] = 0;

    do{
        c = getchar();
        if(c >= 'A' && c <= 'Z')
            c = c + 32;

        switch(c)
        {
            case 'a': counter[0]++; break;
            case 'b': counter[1]++; break;
            case 'c': counter[2]++; break;
            case 'd': counter[3]++; break;
            case 'e': counter[4]++; break;
            case 'f': counter[5]++; break;
            case 'g': counter[6]++; break;
            case 'h': counter[7]++; break;
            case 'i': counter[8]++; break;
            case 'j': counter[9]++; break;
            case 'k': counter[10]++; break;
            case 'l': counter[11]++; break;
            case 'm': counter[12]++; break;
            case 'n': counter[13]++; break;
            case 'o': counter[14]++; break;
            case 'p': counter[15]++; break;
            case 'q': counter[16]++; break;
            case 'r': counter[17]++; break;
            case 's': counter[18]++; break;
            case 't': counter[19]++; break;
            case 'u': counter[20]++; break;
            case 'v': counter[21]++; break;
            case 'w': counter[22]++; break;
            case 'x': counter[23]++; break;
            case 'y': counter[24]++; break;
            case 'z': counter[25]++; break;
            default : break;
        }
    }while(c !=EOF);

    for(i = 0; i < 26 - 1; i++)
    {
        for(j = 0; j < 26 - i - 1; j++)
        {
            if(counter[j] < counter[j+1])
            {
                swapch = alphabet[j];
                alphabet[j] = alphabet[j+1];
                alphabet[j+1] = swapch;

                swap = counter[j];
                counter[j] = counter[j+1];
                counter[j+1] = swap;
            }
        }
    }

    for(i = 0; i < 26; i++)
    {
        printf("\n%c: %d", alphabet[i], counter[i]);
    }
}
