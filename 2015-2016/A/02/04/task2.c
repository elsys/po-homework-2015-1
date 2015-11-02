#include <stdio.h>
#include <stdlib.h>
int exact_square(int a);

int main()
{   int number,c;
    scanf("%d",&number);
    c=exact_square(number);
    printf("%d",c);
    return 0;
}
int exact_square(int a)
{
    int i;
    for(i=0;i<=a;i++)
       if(i*i==a)
            return 1;
    return 0;
}
