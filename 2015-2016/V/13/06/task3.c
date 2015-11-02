#include <stdio.h>
int create_letter_distribution_diagram();

int main()
{
    create_letter_distribution_diagram();
    return 0;
}

int create_letter_distribution_diagram()
{
    unsigned int swap, i, j,table[26][2];
    char in;
    for(i=0;i<26;i++)
    {
        table[i][0] = 'a' + i;
        table[i][1] = 0;
    }

    while((in = getchar()) != EOF)
    {
        for(i=0;i<26;i++)
        {
            if(in == 'a'+i || in == 'A'+i)
            {
                table[i][1]++;
                break;
            }
        }
    }

    for (i = 0 ; i < ( 26 - 1 ); i++)
    {
        for (j = 0 ; j < 26 - i - 1; j++)
        {
            if (table[j][1] < table[j+1][1])
            {
            swap          = table[j][1];
            table[j][1]   = table[j+1][1];
            table[j+1][1] = swap;
            swap          = table[j][0];
            table[j][0]   = table[j+1][0];
            table[j+1][0] = swap;
            }
        }
    }

    for(i=0;i<26;i++) printf("%c: %d\n",table[i][0],table[i][1]);
    return 0;
}
