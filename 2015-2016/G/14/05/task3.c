#include <stdio.h>

int main ()
{
    char c;
    int number = 0;
    int alphabet[26];
    int i = 0;
    for(i = 0; i < 26; i++)
    {
        alphabet[i] = 0;
    }
    while (1)
    {
        c = getchar();
        if (c == '\n')
        {
            break;
        }
       // putchar(c);
        number = c - 'a';
        alphabet[number] += 1;
    }
    int char_number = 0;
    int i2 = 0;
    int biggest_num = -1;
    int biggest_i = -1;

    for(i = 0; i < 26; i++)
    {
        for(i2 = 0; i2 < 26; i2++)
        {
            if(alphabet[i2] > biggest_num)
            {
                biggest_num = alphabet[i2];
                biggest_i = i2;
            }
        }
        char_number += biggest_i + 'a';
        printf("%c: %d\n", char_number, biggest_num);
        alphabet[biggest_i] = -1;
        biggest_i = -1;
        biggest_num = -1;
        char_number = 0;
    }
    return 0;
}
