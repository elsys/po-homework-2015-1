#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, t;
    int palindromflag = 0;
    int x[50];
    int temp, counter, counter2;
    scanf("%d", &n);
    t = n;
    counter = 0;
    counter2 = 0;
    while(palindromflag==0)
    {
        while(n > 0)
        {
            temp = n % 16;
            if(n>=0||n<=9)
            {
                x[counter] = 48 + temp;
            }
            if(n>=10||n<=16)
            {
                switch(temp)
                {
                case 10:
                    x[counter] = 'A';
                    break;
                case 11:
                    x[counter] = 'B';
                    break;
                case 12:
                    x[counter] = 'C';
                    break;
                case 13:
                    x[counter] = 'D';
                    break;
                case 14:
                    x[counter] = 'E';
                    break;
                case 15:
                    x[counter] = 'F';
                    break;
                }
            }
            counter++;
            n = n / 16;
        }
        x[counter] = 'Y';
        counter--;
        counter2 = 0;
        while(counter>-1)
        {
            if(x[counter] == x[counter2])
            {
                palindromflag = 1;
            }
            if(x[counter] != x[counter2])
            {
                palindromflag = 0;
            }
            counter--;
            counter2++;
        }
        counter = 0;
        t++;
        n = t;
    }
    counter = 0;
    while(x[counter]!='Y')
    {
        printf("%c", x[counter]);
        counter++;
    }
    return 0;
}
