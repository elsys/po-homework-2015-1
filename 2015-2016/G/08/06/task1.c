#include <stdio.h>
#include <stdlib.h>

int is_prime(int num);

int main()
{

    int n;
    float f;

    if (!(scanf("%f", &f)) || f-(int)f != 0){

            printf("-1");}

    else  {
            n=f;
            is_prime(n);
    }
    return 0;
}

int is_prime(int num)
{

    int i=2, c=1;

    while(i<=num/2)
    {

        if(num%i==0)
        {
            printf("0");
            c=0;
            break;
        }

        i++;
    }

    if(c==1) printf("1");

    return 0;
}

