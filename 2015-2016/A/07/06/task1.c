#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, r = 0, g = 0, b = 0, temp, change, j;
    char c, n[7];
    int dec[7];
    scanf("%c", &c);
    if(c == 'h')
    {
        scanf("%s", n);
        while(i < 7)
        {
            if( n[i] >= 48 && n[i] <= 57)
            {
                dec[i] = n[i];
                dec[i] = dec[i] - 48;
            }
            else
            {
                switch(n[i])
                {
                    case 'a' :
                        dec[i] = 10; break;
                    case 'b' :
                        dec[i] = 11; break;
                    case 'c' :
                        dec[i] = 12; break;
                    case 'd' :
                        dec[i] = 13; break;
                    case 'e' :
                        dec[i] = 14; break;
                    case 'f' :
                        dec[i] = 15; break;
                }
            }
            i++;
        }
        r = dec[1]*16 + dec[2];
        g = dec[3]*16 + dec[4];
        b = dec[5]*16 + dec[6];
        printf("rgb(%d,%d,%d)", r, g, b);
    }
    if(c == 'd')
    {
        scanf("%d,%d,%d", &r, &g, &b);
        temp = r;
        printf("#");
        while(temp!=0)
        {
            change = temp % 16;

            if(change < 10)
                change = change + 48;
            else
                change = change + 87;

            n[i++] = change;
            temp = temp / 16;
        }
        for(j = i - 1; j > 0; j--)
        printf("%c", n[j]);

        i = 1;
        temp = g;
        while(temp!=0)
        {
            change = temp % 16;

            if(change < 10)
                change = change + 48;
            else
                change = change + 87;

            n[i++] = change;
            temp = temp / 16;
        }
        for(j = i - 1; j > 0; j--)
        printf("%c", n[j]);


        i = 1;
        temp = b;
        while(temp!=0)
        {
            change = temp % 16;

            if(change < 10)
                change = change + 48;
            else
                change = change + 87;

            n[i++] = change;
            temp = temp / 16;
        }
        for(j = i - 1; j > 0; j--)
        printf("%c", n[j]);

    }

    return 0;
}
