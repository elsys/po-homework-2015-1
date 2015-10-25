#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, digit, num[10]={0}, len;
    char digits[100];

    scanf("%s", &digits);

    while(digits[i] != '\0') {

        digit = digits[i] - 48;
        num[digit]++;
        i++;

    }
    for(i=0; i <= 9; i++)
    {
        if(num[i] != 0)
        {
            printf("\nnumber of %d-%d", i, num[i]);
        }

    }

}
