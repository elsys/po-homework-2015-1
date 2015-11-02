#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char roman[20];
    int i, c = 0, l = 0, x = 0, v = 0, j = 0;
    int arabic;
    scanf("%s", roman);
    for(i = 0; i < strlen(roman); i++)
    {
        if(roman[i] == 'C')
            c++;
        if(roman[i] == 'L')
            l++;
        if(roman[i] == 'X')
            x++;
        if(roman[i] == 'V')
            v++;
        if(roman[i] == 'I')
            j++;
    }
    arabic = 100*c + 50*l + 10*x + 5*v + j;
    if(arabic > 256)
        {
           printf("You have entered to big number");
        }
    else
        printf("%d", arabic);

    return 0;
}
