#include <stdio.h>
#include <string.h>
#define Maxnum 26



struct Distribution
{
    char alphabetical;
    int  occurance;
};




void create_letter_distribution_diagram(struct Distribution count[]);




int main()
{
    int i;
    struct Distribution diagram [Maxnum];


    for (i = 0; i < Maxnum; i++)
    {
        diagram[i].alphabetical = i + 'a';
        diagram[i].occurance = 0;
    }




    create_letter_distribution_diagram(diagram);



    /* Output */
    for (i = 0; i < Maxnum; i++)
        printf("%c:%d\n", diagram[i].alphabetical, diagram[i].occurance);




    return 0;
}


void create_letter_distribution_diagram(struct Distribution diagram[])
{
    int i, j;
    char c;
    struct Distribution temp;

    /*Inputing a string and checking if it's a valid character*/
    while (scanf("%c", &c) != EOF)
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        if (c >= 'A' && c <= 'Z')
            c = c + 'a' - 'A';
        diagram[c - 'a'].occurance++;
    }



    /* using bubble sort to make the most frequent letters appear first*/
    for (i = 1; i < Maxnum - 1; i++)
    {
        for (j = 1; j < Maxnum - i - 1; j++)
        {
            if (diagram[j].occurance < diagram[j + 1].occurance)
            {
                temp = diagram[j];
                diagram[j] = diagram[j + 1];
                diagram[j + 1] = temp;
            }

        }
    }
}
