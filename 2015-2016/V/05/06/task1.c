#include <stdio.h>
int is_prime(int number);
int main()
{
    int number;
    scanf("%d",&number);
    printf("%d",is_prime(number));
}
int is_prime(int number)
{
    if(number < 0 || number == 1)
    {
         return -1;
    }
    int residue=1;
    int count=2;
    while(residue!= 0 && number>count)
    {
        residue=number % count;
        count++;
    }
    if(residue==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
