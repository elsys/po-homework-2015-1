#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int lenght, value=0, y=0, x=0, p=0, i, d = 0, k = 0;
    char c[10] ;

    scanf("%s", c);
    lenght = strlen(c);
    for(i = 0; i<=lenght-1; i++)
    {
            if(c[i] == 'I' && y<3)
            {
                value++;
                y++;
            }
            else if(c[i] == 'V')
            {
                value+=5;
                if(k<1)
                {
                    k++;
                }
                else
                {
                    printf("Error");
                    return 0;
                }
                if(c[i-1] == 'I')
                    {
                        value-=2;
                    }
            }
            else if(c[i] == 'X' && x<3)
            {
                value+=10;
                x++;

                if(c[i-1] == 'I')
                    {
                        value-=2;
                    }

            }
            else if(c[i] == 'L')
            {
                value+=50;
                if(d<1)
                {
                    d++;
                }
                else
                {
                    printf("Error");
                    return 0;
                }
                if(c[i-1] == 'X')
                    {
                        value-=20;
                    }
            }
            else if(c[i] == 'C' && p<3)
            {
                value+=100;
                p++;
                if(c[i-1] == 'X')
                    {
                        value-=20;
                    }
            }
        else
        {
            printf("\nError");
            return 0;
        }

    }
    if(value <= 256)
    {
         printf("%d", value);
    }
    else
    {
        printf("Number is higher than 256");
    }


    return 0;
}

