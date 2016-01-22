#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void dec_to_hex();
void hex_to_dec();

int main()
{
    char n;
    scanf("%c", &n);

    switch(n)
    {
        case 'h': hex_to_dec(); break;

        case 'd': dec_to_hex(); break;
    }
}

void hex_to_dec()
{
    char RGB[8];
    int i, j;
    char threeRGB[3][3];
    int array[3];

    scanf("%s", RGB);

    for(i = 1; i < 7; i+=2)
    {
        for(j = 0; j < 2; j++)
        {
            threeRGB[(i-1)/2][j] = RGB[i+j];
        }
        threeRGB[(i-1)/2][j] = '\0';
    }

    for(i=0; i<3; i++)
    {
        array[i] = strtol(threeRGB[i], NULL, 16);
    }

    printf("rgb(%d, %d, %d)", array[0], array[1], array[2]);

}

void dec_to_hex()
{
    int i = 0;
    int a,b,c;
    char first[20];
    char second[20];
    char third[20];

    scanf("%s", first);
    scanf("%s", second);
    scanf("%s", third);

    for(;i < 4; i++)
    {
        if(first[i] == ',')
        {
            first[i] = '\0';
        }
        if(second[i] == ',')
        {
            second[i] = '\0';
        }
        if(third[i] == ',')
        {
            third[i] = '\0';
        }
    }

    a = atoi(first);
    b = atoi(second);
    c = atoi(third);

    printf("#%x%x%x", a, b, c);
}
