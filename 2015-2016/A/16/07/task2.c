#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, v, p;
    int temp, counter, counterremember;
    int temp2[50];
    counter = 0;
    scanf("%d", &n);
    scanf("%d", &v);
    if(v!=0)
    {
        if(v!=1)
        {
            return 0;
        }
    }
    scanf("%d", &p);
    while(p<=0 || p>=7)
    {
        return 0;
    }
    while(n>0)
    {
        temp = n % 2;
        temp2[counter] = temp;
        n = n / 2;
        counter++;
    }
    temp2[p] = v;
    counter--;
    counterremember = counter;
    counter = 0;
    n = 0;
    while(counterremember > -1)
    {
        v = pow(2, counter);
        //printf("\nv - %d", v);
       // printf("\ntemp - %d", temp2[counter]);
        temp = temp2[counter] * v;
       // printf("\ntemp2 - %d", temp);
        n = n + temp;
        counter++;
        counterremember--;
    }
    printf("\n%d", n);
    return 0;
}
