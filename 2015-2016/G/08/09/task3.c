#include <stdio.h>
#include <string.h>

int dec_to_hex(int n,char hex[]);
char hex_val(int dec);

int main()
{
    int n,i;

    char hex[20];

    scanf("%d",&n);

    for(i=0; i<20; i++)
    {

        hex[i]='-';

    }
    int c=0,l;
    while(!c)
    {

        dec_to_hex(n,hex);

        for(i=0; hex[i]!='-'; i++);

        l=i-1;
        for(i=0; i<=l; i++,l--)
            if(hex[i]!=hex[l])
            {   c=0;
                n++;
                break;
            }
            else
            {

                c=1;
            }


    }
    for(i=0; hex[i]!='-'; i++)
    printf("%c",hex[i]);

    return 0;

}

int dec_to_hex(int n,char hex[])
{

    int helper,i;

    helper = n;
    for(i=0; helper; i++)
    {
        hex[i]=hex_val(helper%16);
        helper=helper/16;

    }

    return 0;
}

char hex_val(int dec)
{
    switch(dec)
    {
    case 0:
        return '0';
        break;
    case 1:
        return '1';
        break;
    case 2:
        return '2';
        break;
    case 3:
        return '3';
        break;
    case 4:
        return '4';
        break;
    case 5:
        return '5';
        break;
    case 6:
        return '6';
        break;
    case 7:
        return '7';
        break;
    case 8:
        return '8';
        break;
    case 9:
        return '9';
        break;
    case 10:
        return 'A';
        break;
    case 11:
        return 'B';
        break;
    case 12:
        return 'C';
        break;
    case 13:
        return 'D';
        break;
    case 14:
        return 'E';
        break;
    case 15:
        return 'F';
        break;
    }

    return 0;
}
