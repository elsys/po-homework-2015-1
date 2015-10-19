#include<stdio.h>
#include<string.h>

int getIntValueOfCart(char);
int main(){

    int c,d,len;
    char swap;
    char carts[100];
    scanf("%s", &carts);

    len = strlen(carts);

    for (c = 0 ; c < ( len - 1 ); c++)
    {
        for (d = 0 ; d < len - c - 1; d++)
        {
            if (getIntValueOfCart(carts[d]) > getIntValueOfCart(carts[d + 1]))
            {
                swap = carts[d];
                carts[d] = carts[d+1];
                carts[d+1] = swap;
            }
        }
    }

    printf("%s", carts);
}

int getIntValueOfCart(char cart)
{
    switch(cart){
    case '1':
        return 1;
    break;
    case '2':
        return 2;
    break;
    case '3':
        return 3;
    break;
    case '4':
        return 4;
    break;
    case '5':
        return 5;
    break;
    case '6':
        return 6;
    break;
    case '7':
        return 7;
    break;
    case '8':
        return 8;
    break;
    case '9':
        return 9;
    break;
    case 'T':
        return 10;
    break;
    case 'J':
        return 11;
    break;
    case 'Q':
        return 12;
    case 'K':
        return 13;
    case 'A':
        return 14;
    break;

    default:
        return 0;
        break;
    }
}


